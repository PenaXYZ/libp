#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (s && f)
	{
		while (*s)
			f(i++, s++);
	}
}

/*
ft_striteri applies the function f to each character of the string passed
as argument, and passing its index as first argument. Each character is
passed by address to f to be modified if necessary.
*/

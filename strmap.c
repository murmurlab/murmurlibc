





// ahbasara

/* Function name ft_strmapi
Prototype char *ft_strmapi(char const *s, char (*f)(unsigned
int, char));
Turn in files -
Parameters s: The string on which to iterate.
f: The function to apply to each character.
Return value The string created from the successive applications
of ’f’.
Returns NULL if the allocation fails.
External functs. malloc
Description Applies the function ’f’ to each character of the
string ’s’, and passing its index as first argument
to create a new string (with malloc(3)) resulting
from successive applications of ’f’. */

#include "murmurlibc.h"

char	*strmap(char const *s, char (*f)(unsigned int, char))
{
	char			*new;
	unsigned int	i;

	new = malloc(sizeof(char) * (xstrlen(s) + 1));
	if (!s || !f || !new)
		return (NULL);
	i = 0;
	while (s[i])
	{
		new[i] = f(i, s[i]);
		i++;
	}
	new[i] = 0;
	return (new);
}

char	upper(unsigned int i, char c)
{
	if (c > 96 && c < 123 && i != 0)
		return (c - 32);
	return (c);
}

/* 
int	main(void)
{
	char	*ret;

	ret = malloc(sizeof(char) * 99);
	ret = ft_strmapi("test", upper);
	printf("val: %s", ret);
}
 */

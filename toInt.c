// ahbasara

#include "murmurlibc.h"

long	x_atoi(const char *str)
{
	long	is_neg;
	long	res;

	is_neg = 1;
	while (((*str >= 9 && *str <= 13) || *str == 32))
		str++;
	if (*str == '-')
		is_neg = -1;
	if ((is_neg == -1 || *str == '+') && str++)
	{
	}
	res = 0;
	while (*str >= '0' && *str <= '9')
		res = (res * 10) + (*str++ - '0');
	if ((!(*str >= '0') || !(*str <= '9')) && *str != 0)
		return(0);
	return ((res * is_neg));
}

/* int main(void)
{
    char    s1[44] = "++214748u3647";
    printf("%d\n", ft_atoi(s1));
    printf("%d", atoi(s1));
} */

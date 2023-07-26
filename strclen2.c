#include "murmurlibc.h"

size_t	strclen2(const char *s, char c)
{
    size_t	r;

	r = 0;
    while((s = xstrchr(s, c)) && s++ && (r++ || 1))
        ;
    return (r);
}
/* 
int	main(void)
{
	size_t s;
	char *arr = "cekoslavakyalilastiramadiklarimizdanmistircasina";

	s = strclen2(arr, 'a');
	p("%d\n", s);
}
 */
#include <stddef.h>

void    *ft_memcpy(void *dest, void *src, size_t n )
{
    size_t i = 0;
    unsigned char *d = dest;
    unsigned char *s = src;

    while(i < n)
    {
        d[i] = s[i];
        i++;
    }
    return dest;
}
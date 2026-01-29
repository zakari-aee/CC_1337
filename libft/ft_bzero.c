#include <stddef.h>

void    ft_bzero(void *ptr,size_t n)
{
    size_t i = 0;
    unsigned char *p = ptr;
    while(i < n)
    {
        p[i] = '\0';
        i++;
    }
}
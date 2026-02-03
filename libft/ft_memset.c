#include <stddef.h>

void    *my_memset(void *ptr, int value, size_t num)
{
    unsigned char   *p;
    size_t  i;

    *p = ptr;
    i = 0;
    
    while(i < num)
    {
        p[i] = (unsigned char)value;
        i++;
    }
    return ptr;
}
#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n) {
    const unsigned char *ptr = (const unsigned char *)s1;
    const unsigned char *ptr2 = (const unsigned char *)s2;
    while(n > 0) {
        if(*ptr != *ptr2)
            return (*ptr - *ptr2);
        ptr++;
        ptr2++;
        n--;
    }
    return 0;
}
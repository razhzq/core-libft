#include "libft.h"

void*   ft_memmove(void *dst, const void *src, size_t len) {
    unsigned char *d = (unsigned char *)dst;
    const unsigned char *s = (const unsigned char *)src;
    if(dst < src) {
        while(len != 0) {
            *d = *s;
            d++;
            s++;
            len--;
        }
    } else {
        d += len-1;
        s += len-1;
        while (len--)
           *d-- = *s--;

    }
    return dst;
}
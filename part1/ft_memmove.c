
#include <stdio.h>

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
        while (len != 0) {
           d[len] = s[len];
           len--;
        }
    }
    return dst;
}


int main(void) {
    char dst2[20] = "ABCDEFGHIJKLMNO";
    
    printf("\nTest 2 - Overlapping memory regions\n");
    printf("Before ft_memmove: %s", dst2);

    ft_memmove(dst2 + 4, dst2, 10);  // Move 10 bytes within the same array
    
    printf("\nAfter ft_memmove: %s", dst2);
    return 0;
}
#include <stddef.h>
#include <stdio.h>


void*   ft_memcpy(void *dst, const void *src, size_t n) {
    unsigned char *d = (unsigned char *)dst;
    const unsigned char *s = (const unsigned char *)src;

    if(dst == NULL && src == NULL)
        return NULL;
    while(n != 0) {
        *d = *s;
        d++;
        s++;
        n--;
    }
    return dst;
}



int main(void) {
        char dest_str[] = "12345678"; 
    ft_memcpy(dest_str, dest_str + 3, 5);
    printf("%s", dest_str);
    return 0;
}
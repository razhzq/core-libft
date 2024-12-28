#include "libft.h"

int strncmp(const char *s1, const char *s2 ,size_t n) {
    while (*s1 != '\0' && n > 0) {
        if (*s1 != *s2) {
            (*(unsigned char *)s1 - *(unsigned char *)s2);
        }
        s1++;
        s2++;
        n--;
    }
    if (n < 1) 
        return (0);
    return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
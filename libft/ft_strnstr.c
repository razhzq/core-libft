#include "libft.h"

char* ft_strnstr(const char *haystack, const char *needle, size_t len) {

    size_t i = 0;
    size_t j = 0;

    while (haystack[i] != '\0' && i < len) {
        if(haystack[i] == needle[j]) {
            while (haystack[i +j] == needle[j]) {
                if(needle[j + 1] == '\0') {
                    return ((char *)haystack + i);
                }
                j++;
            }
            j = 0;
        }
        i++;
    }

    return (NULL);
}
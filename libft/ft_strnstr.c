#include "libft.h"

char* ft_strnstr(const char *haystack, const char *needle, size_t len) {

    size_t i = 0;
    size_t j = 0;

    size_t len_n = ft_strlen((char *)needle);

    if(!len_n)
        return (char *)haystack;

    while (haystack[i] != '\0' && len_n <= len) {
        if(haystack[i] == needle[j]) {
            while (haystack[i +j] == needle[j]) {
                if(needle[j + 1] == '\0') {
                    return ((char *)haystack + i);
                }
                j++;
            }
            j = 0;
        }
        len--;
        i++;
    }

    return (NULL);
}
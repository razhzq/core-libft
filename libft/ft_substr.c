#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len) {
    int i = 0;
    unsigned int sub_len = (len + 1) - start;
    char *temp = (char *)malloc(sizeof(char *) * sub_len + 1);

    while(start < len) {
        temp[i] = s[start];
        i++;
        start++;
    }
    temp[i] = '\0';
    return temp;
}
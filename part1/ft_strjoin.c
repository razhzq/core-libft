#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2) {
    int len1 = ft_strlen(s1);
    int len2 = ft_strlen(s2);
    int i = 0;
    int total = len1 + len2;

    char *temp = (char *)malloc(sizeof(char *) * (len1 + len2));
    while(len1 < total) {
        temp[len1] = s2[i];
        len1++;
        i++;
    }
    temp[total] = '\0';

    return temp;
}
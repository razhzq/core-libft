#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2) {
    int len1 = ft_strlen((char *)s1);
    int len2 = ft_strlen((char *)s2);
    int i = 0;

    char *temp = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
    
    while(*s1 != '\0') {
         temp[i] = *s1;
         s1++;
         i++;
    }
       
    while (*s2 != '\0') {
        temp[i] = *s2;
        s2++;
        i++;
    }
    temp[i] = '\0';

    return temp;
}
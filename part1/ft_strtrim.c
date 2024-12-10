#include "libft.h"

char *ft_strtrim(char const *s1, char const *set) {
    int i = 0;
    int j = 0;
    int len = 0;

    while (s1[i] != '\0') {
        while(set[j] != '\0') {
            if(s1[i] == set[j]) {
                len++;
            }
            j++;
        }
        j = 0;
        i++;
    }

    i = 0;
    j = 0;

    char *temp = (char *)malloc(sizeof(char *) * (len + 1));

    while (i < len) {
        while(set[j] != '\0') {
            if(set[j] != s1[i]) {
                temp[i] = s1[i];
            }
            j++;
        }
        j = 0;
        i++;
    }
    temp[len] = '\0';

    return temp;
}

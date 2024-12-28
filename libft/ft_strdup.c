#include "libft.h"


char* strdup(const char *s1) {
    int i = 0;
    int len = ft_strlen(s1);

    char *temp = (char *)malloc(sizeof(char *) * (len + 1));
    while (i < len) {
        temp[i] = s1[i];
        i++;
    }
    temp[i] = '\0';
    return temp;
}
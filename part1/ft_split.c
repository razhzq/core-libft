#include "libft.h"

int countArr(char const *s, char c) {
    int count = 0;
    int i = 0;

    while(s[i] != '\0') {
        if(s[i] == c) {
            count++;
        }
        i++;
    }
    return count + 1;
}


char **ft_split(char const *s, char c) {
    int i = 0;
    int arrCount = 0;
    int subCount = 0;
    char **result;

    int count = countArr(s, c);
    result = (char **)malloc(sizeof(char *) * (count + 1));

    while(s[i] != '\0') {
        if(s[i] == c) {
            result[arrCount] = alloSub((char *)s, c, i);
        }
    }
}

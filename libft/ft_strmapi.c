#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char)) {
    
    int i = 0;

    int len = ft_strlen((char *)s);

    char* temp = (char *)malloc(sizeof(char) * (len + 1));
    if(!temp) 
        return NULL;

    while(s[i] != '\0') {
        temp[i] = f(i, s[i]);
        i++;
    }

    temp[i] = '\0';
    return temp;
}
#include "libft.h"


char* ft_strdup(const char *s1) {
    size_t len = ft_strlen((char *)s1) + 1;

    char *temp = (char *)malloc(sizeof(char) * len);

    if(!temp)
        return NULL;
    
    ft_strlcpy(temp, s1, len);

    return temp;
}
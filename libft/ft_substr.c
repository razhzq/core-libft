#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len) {
    unsigned int s_len = ft_strlen((char *)s);
    unsigned int sub_len = s_len - start;

    if(!s)
        return NULL;

    if(start > s_len)
        return ft_strdup("");

    if(sub_len >= len)
        sub_len = len;

    sub_len += 1;

    char *temp = (char *)malloc(sizeof(char) * (sub_len + 1));
    
    if(!temp)
        return NULL;

    ft_strlcpy(temp, (s + start), sub_len);
    return temp;
}
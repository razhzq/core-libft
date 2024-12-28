#include "libft.h"


char* ft_strrchr(const char *str, int c) {
    int len;

    len = ft_strlen((char *)str);

     if ((char)c == '\0') {
        return (char *)(str + len);
    }

    while(len >= 0) {
        if(str[len] == (char)c)
            return (char *)&str[len];
        len--;
    }

    return NULL;

}
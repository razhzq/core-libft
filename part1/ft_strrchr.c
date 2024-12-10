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

int main() {
    const char *string = "Hello, world!";
    char ch = 'o';

    char *result = ft_strrchr(string, ch);
    if (result) {
        printf("Last occurrence of '%c': %s\n", ch, result);
    } else {
        printf("Character '%c' not found.\n", ch);
    }

    return 0;
}
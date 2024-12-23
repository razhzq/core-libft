#include "libft.h"

char *ft_itoa(int n) {
    char *str;
    int temp = n;
    int len = 0;
    int sign = 1;

    if (n <= 0) {
        len++;
        sign = -1;
    }

    while (temp != 0) {
        len++;
        temp /= 10;
    }

    str = (char *)malloc(sizeof(char) * (len + 1));
    if (!str)
        return NULL;

    str[len] = '\0';

    if (n < 0)
        sign = -1;

    while (len > 0) {
        str[--len] = '0' + (n % 10) * sign;
        n /= 10;
    }

    if (sign == -1)
        str[0] = '-';

    return str;
}

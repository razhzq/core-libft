#include "libft.h"

void ft_putstr_fd(char *s, int fd) {
    unsigned int i = 0;

    while(s[i] != '\0') {
        write(fd, &s[i], 1);
        i++;
    }

}
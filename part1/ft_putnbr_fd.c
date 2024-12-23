#include "libft.h"

void ft_putnbr_fd(int n, int fd) {
    char* temp;

    temp = ft_itoa(n);
    write(fd, &temp, 1);
}
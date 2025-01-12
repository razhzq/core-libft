#ifndef PRINTF_H
# define PRINTF_H

#include <stdarg.h>
# include <stdint.h>
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
#include "../libft/libft.h"

int ft_printf(const char *format, ...);
int	format_number(int num);
int	format_hex(unsigned long int num, int is_uppercase, int is_address);
int conv_hex(unsigned long int num, int is_address, int is_upper);
int    print_str(char *c);
void convert_to_upper(char *s);
int	calculate_num(int n);
char	*ft_itoa(int n);


#endif




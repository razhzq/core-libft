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
int format_unsigned(unsigned int num);
int	format_hex(unsigned long int num, int is_uppercase, int is_address);
int conv_hex(unsigned long int num, int is_address, int is_upper);
int    print_str(char *c);
void convert_to_upper(char *s);
char	*ft_itoa_unsigned(unsigned int n);


#endif




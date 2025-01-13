/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_format.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdul- <muabdul-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 20:11:33 by muabdul-          #+#    #+#             */
/*   Updated: 2025/01/09 20:43:50 by muabdul-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	format_number(int num)
{
	int		len;
	char	*temp;
	
	len = 0;
	temp = ft_itoa(num);
	len += print_str(temp);
    free(temp);
	return (len);
}

int format_unsigned(unsigned int num)
{
    int		len;
    char    *temp;
	
	len = 0;
	temp = ft_itoa_unsigned(num);
	len += print_str(temp);
    free(temp);
	return (len);
}

int	format_hex(unsigned long int num, int is_uppercase, int is_address)
{
	int	len;

	len = 0;
    if (is_address != 1 && num == 0)
    {
        ft_putchar_fd('0', 1);
        return (1);
    }
    if (is_address == 1 && num == 0) 
    {
        ft_putstr_fd("0x0", 1);
        return (3);
    }
	len += conv_hex(num, is_address, is_uppercase);
	return (len);
}

int conv_hex(unsigned long int num, int is_address, int is_upper) {
    const char *base = "0123456789abcdef";
    char result[32];
    int len;
    int i;

    len = 0;
    i = 0;
    if (is_address == 1) 
    {
        ft_putstr_fd("0x", 1);
        len += 2;
    }
    while (num > 0) 
    {
        result[i++] = base[num % 16];
        num /= 16;
        len++;
    }
    while (i > 0)
    {
        if (is_upper == 1)
            ft_putchar_fd(ft_toupper(result[--i]), 1);
        else
            ft_putchar_fd(result[--i], 1);
    }
    return len;
}

int    print_str(char *c) {
    int len = 0;

    if (!c) 
    {
        write(1, "(null)", 6);
        return 6;
    }

    while (*c != '\0')
    {
        write(1, c, 1);
        c++;
        len++;
    }
    return (len);
}



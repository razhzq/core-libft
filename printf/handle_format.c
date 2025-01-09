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
	
	temp = ft_itoa(num);
	len += print_str(temp);
	return (len);
}

int	format_hex(unsigned long int num, int is_uppercase, int is_address)
{
	int		len;
	char	*temp;

	if (is_address == 1)
		temp = conv_hex(num, 1);
	if (is_uppercase == 1 && is_address == 0) 
	{
		temp = conv_hex(num, 0);
		convert_to_upper(temp);	
	}
	if (is_uppercase == 0 && is_address == 0)
		temp = conv_hex(num, 0);
	len =+ print_str(temp);
	return (len);
}


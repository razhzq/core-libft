/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdul- <muabdul-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 23:18:36 by muabdul-          #+#    #+#             */
/*   Updated: 2024/11/06 23:25:02 by muabdul-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char* ft_strchr(const char *str, int c) {
    while (*str != '\0')
    {
       if(*str == (char)c) {
        return (char *)str;
       }
       str++;
    }
    if (c == '\0') {
        return (char *)str;
    }
    return NULL;
}



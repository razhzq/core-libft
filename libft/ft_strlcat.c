/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdul- <muabdul-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 22:36:11 by muabdul-          #+#    #+#             */
/*   Updated: 2024/11/06 22:51:37 by muabdul-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strlcat(char *dst, const char *src, size_t dstsize) {
    int count = 0;
    int i = 0;
    int j = 0;
    int limiter = dstsize -1;

    while(dst[i] != NULL) {
        i++;
        count++;
    }
    while(limiter != 0 && src[j] != NULL) {
        dst[i] = src[j];
        i++;
        j++;
        count++;
    }
    dst[i] = NULL;
    return count;
}
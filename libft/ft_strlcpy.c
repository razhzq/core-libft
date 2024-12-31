/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdul- <muabdul-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 22:26:40 by muabdul-          #+#    #+#             */
/*   Updated: 2024/11/06 22:34:54 by muabdul-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t dstSize) {
    size_t count = 0; // Tracks the length of `src`
    size_t i = 0;

    // Calculate the length of `src`
    while (src[count] != '\0') {
        count++;
    }

    // Copy at most `dstSize - 1` characters from `src` to `dst`
    if (dstSize > 0) {
        while (i < dstSize - 1 && src[i] != '\0') {
            dst[i] = src[i];
            i++;
        }
        dst[i] = '\0'; // Null-terminate the destination string
    }

    return count; // Return the length of the source string
}
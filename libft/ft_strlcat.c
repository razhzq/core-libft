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

size_t ft_strlcat(char *dst, const char *src, size_t dstsize) {
    size_t dst_len = 0;
    size_t src_len = 0;
    size_t i = 0;

    // Calculate the lengths of dst and src
    while (dst[dst_len] != '\0' && dst_len < dstsize) {
        dst_len++;
    }
    while (src[src_len] != '\0') {
        src_len++;
    }

    // If dstsize is less than or equal to dst_len, return dstsize + src_len
    if (dstsize <= dst_len) {
        return dstsize + src_len;
    }

    // Start appending src to dst
    i = 0;
    while (src[i] != '\0' && (dst_len + i) < (dstsize - 1)) {
        dst[dst_len + i] = src[i];
        i++;
    }

    // Null-terminate dst
    if ((dst_len + i) < dstsize) {
        dst[dst_len + i] = '\0';
    }

    // Return the total length of the string that would have been created
    return dst_len + src_len;
}
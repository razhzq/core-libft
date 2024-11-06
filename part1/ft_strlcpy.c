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

int ft_strlcpy(char *dst, char *src, size_t dstSize) {
    int i = dstSize - 1;
    int count;
    int j = 0;
    

    while(i != 0 && src[j] != NULL) {
        dst[j] = src[j];
        count++;
    }
    dst[j] = NULL;
    return count;
}
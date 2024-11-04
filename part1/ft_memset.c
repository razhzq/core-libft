/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdul- <muabdul-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 21:54:15 by muabdul-          #+#    #+#             */
/*   Updated: 2024/11/04 22:28:13 by muabdul-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void*   ft_memset(void *b, int c, size_t len) {
    char *temp = (char *)b;
    while(len != 0) {
        *temp = (char)c;
        temp++;
        len--;
    }
    return temp;
}

// int main(void) {

//     char str[] = "Hello";
//     ft_memset(str + 1, '.', 2);
//     printf("%s", str);
//     return 0;
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdul- <muabdul-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 21:28:30 by muabdul-          #+#    #+#             */
/*   Updated: 2024/11/04 21:33:04 by muabdul-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *s) {
    int count;

    count = 0;
    while(*s != '\0') {
        s++;
        count++;
    }
    return count;
}

// int main(void) {
//     char string[] = "Hello";
//     int result = ft_strlen(string);
//     printf("%d", result);
//     return 0;
// }
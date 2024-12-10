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

#include <stdio.h>

char* ft_strchr(const char *str, int c) {
    
    if (c == '\0') {
        return (char *)str;
    }

    while (*str != '\0')
    {
       if(*str == (char)c) {
        return (char *)str;
       }
       str++;
    }
    return NULL;
    
    
}

int main() {
    const char *string = "Hello, world!";
    char ch = 'w';

    char *result = ft_strchr(string, ch);
    if (result) {
        printf("Character '%c' found at position: %ld\n", ch, result - string);
    } else {
        printf("Character '%c' not found.\n", ch);
    }
    return 0;
}



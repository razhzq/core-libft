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

int strlen(char *str) {
    int count = 0;
    while(str[count] != NULL) {
        count++;
    }
    return count;
}


char* ft_strchr(const char *str, int search_str) {
    int len = strlen(str);
    if(str[len / 2] == search_str)
        return str;
    
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdul- <muabdul-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 21:01:11 by muabdul-          #+#    #+#             */
/*   Updated: 2024/11/04 21:16:47 by muabdul-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

int ft_isdigit(int c) {
    if(!(c >= 48 && c <= 57))
        return 0;
    return 1;
}

int main(void) {
	char testChar = '+';
	int test = ft_isdigit(testChar);
	printf("%i", test);
	return 0;
}
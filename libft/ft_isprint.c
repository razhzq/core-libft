/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdul- <muabdul-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 21:26:08 by muabdul-          #+#    #+#             */
/*   Updated: 2024/11/04 21:27:46 by muabdul-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isprint(int c) {
    if(!(c >= 33 && c <= 126))
        return 0;
    return 1;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdul- <muabdul-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 21:17:28 by muabdul-          #+#    #+#             */
/*   Updated: 2024/11/04 21:23:27 by muabdul-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalnum(int c) {
    if (!(((c >= 65 && c <= 90) || (c >= 97 && c <= 122)) || (c >= 48 && c <= 57)))
		return 0;
	return 1;
}
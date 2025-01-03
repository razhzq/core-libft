/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdul- <muabdul-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 19:09:02 by muabdul-          #+#    #+#             */
/*   Updated: 2025/01/03 19:10:51 by muabdul-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	s_len;
	unsigned int	sub_len;
	char			*temp;

	s_len = ft_strlen((char *)s);
	sub_len = s_len - start;
	if (!s)
		return (NULL);
	if (start > s_len)
		return (ft_strdup(""));
	if (sub_len >= len)
		sub_len = len;
	sub_len += 1;
	temp = (char *)malloc(sizeof(char) * (sub_len + 1));
	if (!temp)
		return (NULL);
	ft_strlcpy(temp, (s + start), sub_len);
	return (temp);
}

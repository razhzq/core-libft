#include "ft_printf.h"

int	calc_nbr(unsigned int n)
{
	int				len;
	unsigned int	num;

	num = n;
	len = 0;
	while (num != 0)
	{
		num = num / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa_unsigned(unsigned int n)
{
	int				i;
	char			*str;
	unsigned int	num;

	num = n;
	i = calc_nbr(n);
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	str[i--] = '\0';
	if (n == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (n < 0)
		str[0] = '-';
	while (num != 0)
	{
		str[i--] = (num % 10) + '0';
		num /= 10;
	}
	return (str);
}
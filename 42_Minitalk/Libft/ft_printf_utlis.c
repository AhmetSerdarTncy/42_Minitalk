/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utlis.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahtuncay  <ahtuncay@student.42kocael>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:39:41 by ahtuncay          #+#    #+#             */
/*   Updated: 2023/10/18 09:59:06 by ahtuncay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_int(int a)
{
	char	*res;
	int		chr;

	res = ft_itoa(a);
	chr = ft_strlen(res);
	ft_putstr_fd(res, 1);
	free(res);
	return (chr);
}

int	ft_hex(unsigned int a, char c)
{
	int	ret;

	ret = 0;
	if (a >= 16)
		ret += ft_hex(a / 16, c);
	if (c == 'X')
		write(1, &"0123456789ABCDEF"[a % 16], 1);
	if (c == 'x')
		write(1, &"0123456789abcdef"[a % 16], 1);
	return (ret + 1);
}

int	ft_point(unsigned long a, int sign)
{
	int	ret;

	ret = 0;
	if (sign == 1)
	{
		ret += write(1, "0x", 2);
		sign = 0;
	}
	if (a >= 16)
		ret += ft_point(a / 16, 0);
	write(1, &"0123456789abcdef"[a % 16], 1);
	return (ret + 1);
}

int	ft_string(char *str)
{
	int	i;

	i = -1;
	if (!str)
		return (write(1, "(null)", 6));
	while (str[++i])
		write(1, &str[i], 1);
	return (i);
}

int	ft_unsigned(unsigned int a)
{
	int	ret;

	ret = 0;
	if (a >= 10)
		ret += ft_unsigned(a / 10);
	write(1, &"0123456789"[a % 10], 1);
	return (ret + 1);
}

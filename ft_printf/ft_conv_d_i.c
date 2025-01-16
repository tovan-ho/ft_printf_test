/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_d_i.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tovan-ho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 13:18:37 by tovan-ho          #+#    #+#             */
/*   Updated: 2025/01/15 13:35:13 by tovan-ho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_conv_d_i(int num)
{
	int	len;

	len = 0;
	if (num == -2147483648)
	{
		write(1, "-2147483648", 11);
		len = 11;
	}
	else if (num < 0)
	{
		len += ft_conv_c('-');
		len += ft_conv_d_i(-num);
	}
	else if (num > 9)
	{
		len += ft_conv_d_i(num / 10);
		len += ft_conv_d_i(num % 10);
	}
	else
		len += ft_conv_c(num + '0');
	return (len);
}

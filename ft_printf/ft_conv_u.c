/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_u.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tovan-ho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 13:37:12 by tovan-ho          #+#    #+#             */
/*   Updated: 2025/01/15 13:43:24 by tovan-ho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_conv_u(unsigned int num)
{
	int	len;

	len = 0;
	if (num > 9)
	{
		len += ft_conv_u(num / 10);
		len += ft_conv_u(num % 10);
	}
	else if (num < 10)
		len += ft_conv_c(num + '0');
	return (len);
}

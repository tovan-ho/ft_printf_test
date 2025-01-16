/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_hub.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tovan-ho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 12:14:40 by tovan-ho          #+#    #+#             */
/*   Updated: 2025/01/16 14:09:53 by tovan-ho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_format_hub(va_list args, const char conv_char)
{
	int	len;

	len = 0;
	if (conv_char == 'c')
		len += ft_conv_c(va_arg(args, int));
	else if (conv_char == 's')
		len += ft_conv_s(va_arg(args, char *));
	else if (conv_char == 'd' || conv_char == 'i')
		len += ft_conv_d_i(va_arg(args, int));
	else if (conv_char == 'p')
		len += ft_conv_p(va_arg(args, void *));
	else if (conv_char == 'u')
		len += ft_conv_u(va_arg(args, unsigned int));
	else if (conv_char == 'x' || conv_char == 'X')
		len += ft_conv_x(va_arg(args, int), conv_char);
	else if (conv_char == '%')
		return (write(1, "%", 1));
	return (len);
}

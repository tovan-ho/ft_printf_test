/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tovan-ho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 11:58:18 by tovan-ho          #+#    #+#             */
/*   Updated: 2025/01/16 14:04:44 by tovan-ho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

/*header files used*/
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include "./libft/libft.h"

/*function prototypes*/
int	ft_printf(const char *format, ...);
int	ft_format_hub(va_list args, const char conv_char);
int	ft_conv_c(char c);
int	ft_conv_s(char *str);
int	ft_conv_d_i(int num);
int	ft_conv_p(void *ptr);
int	ft_conv_u(unsigned int num);
int	ft_conv_x(int num, const char conv_char);

#endif

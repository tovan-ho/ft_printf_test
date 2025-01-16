/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tovan-ho <tovan-ho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 13:40:07 by tovan-ho          #+#    #+#             */
/*   Updated: 2024/11/14 10:57:43 by tovan-ho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*temp_d;
	unsigned char	*temp_s;

	if (!dest && !src)
		return (dest);
	temp_d = (unsigned char *) dest;
	temp_s = (unsigned char *) src;
	while (n > 0)
	{
		*(temp_d++) = *(temp_s++);
		n--;
	}
	return (dest);
}

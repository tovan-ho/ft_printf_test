/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tovan-ho <tovan-ho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 11:33:38 by tovan-ho          #+#    #+#             */
/*   Updated: 2024/11/19 11:45:49 by tovan-ho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;
	unsigned char		uc;

	ptr = (const unsigned char *)s;
	uc = (unsigned char)c;
	while (n--)
	{
		if (*ptr == uc)
			return ((void *)ptr);
		ptr++;
	}
	return (NULL);
}

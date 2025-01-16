/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tovan-ho <tovan-ho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 10:58:41 by tovan-ho          #+#    #+#             */
/*   Updated: 2024/11/19 15:08:38 by tovan-ho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*temp_src;
	char	*temp_dest;
	size_t	i;

	if (!dest && !src)
		return (NULL);
	temp_src = (char *) src;
	temp_dest = (char *) dest;
	i = 0;
	if (temp_dest > temp_src)
	{
		while (n-- > 0)
			temp_dest[n] = temp_src[n];
	}
	else
	{
		while (i++ < n)
			temp_dest[i] = temp_src[i];
	}
	return (dest);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tovan-ho <tovan-ho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 10:35:34 by tovan-ho          #+#    #+#             */
/*   Updated: 2024/11/20 11:11:17 by tovan-ho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*full;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	full = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!full)
		return (NULL);
	while (s1[i])
	{
		full[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		full[i] = s2[j];
		i++;
		j++;
	}
	full[i] = '\0';
	return (full);
}

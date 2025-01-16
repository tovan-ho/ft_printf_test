/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tovan-ho <tovan-ho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 14:21:49 by tovan-ho          #+#    #+#             */
/*   Updated: 2024/11/21 11:03:53 by tovan-ho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static char	**ft_free(char **s2, int wd)
{
	int	i;

	i = 0;
	while (i < wd)
	{
		free(s2[i]);
		i++;
	}
	free(s2);
	return (NULL);
}

static char	**ft_split_words(const char *s, char c, char **s2, int wd_amount)
{
	int	i;
	int	wd;
	int	wd_len;

	i = 0;
	wd = 0;
	wd_len = 0;
	while (wd < wd_amount)
	{
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			i++;
			wd_len++;
		}
		s2[wd] = (char *)malloc(sizeof(char) * (wd_len + 1));
		if (!s2[wd])
			return (ft_free(s2, wd));
		ft_strlcpy(s2[wd], &s[i - wd_len], wd_len + 1);
		wd_len = 0;
		wd++;
	}
	s2[wd] = 0;
	return (s2);
}

static int	ft_count_words(const char *s, char c)
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			nb++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (nb);
}

char	**ft_split(char const *s, char c)
{
	char			**s2;
	unsigned int	wd_amount;

	if (!s)
		return (NULL);
	wd_amount = ft_count_words(s, c);
	s2 = (char **)malloc(sizeof(char *) * (wd_amount + 1));
	if (!s2)
		return (NULL);
	if (wd_amount == 0)
	{
		s2[0] = NULL;
		return (s2);
	}
	ft_split_words(s, c, s2, wd_amount);
	return (s2);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tovan-ho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 11:17:28 by tovan-ho          #+#    #+#             */
/*   Updated: 2025/01/14 14:14:09 by tovan-ho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	int	count;
	char	t;

	t = 'T';
	count = 0;
	count = printf("hello, my name is Tom\n");
	printf("the amount of characters written: %d\n", count);

	count = ft_printf("Hello, my name is %com\n", t);
	printf("the amount of characters written: %d\n", count);
	return (0);
}

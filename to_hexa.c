/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:38:36 by hlahwaou          #+#    #+#             */
/*   Updated: 2022/11/07 20:40:45 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


static void	print_hexa(long c, int i)
{
	char	*str;
	char	*str1;

	str = "0123456789ABCDEF";
	str1 = "0123456789abcdef";
	if (c <= 16 &&  c >= 0)
	{
		if (i == 1)
			write(1, &str[c], 1);
		else if (i == 2)
			write(1, &str1[c], 1);
	}
	else
	{
		print_hexa(c / 16, i);
		print_hexa(c % 16, i);
	}
}

int	to_hexa(unsigned long c, int k)
{
	long	l;
	int		i;

	l = c;
	i = 1;
	while (l > 15)
	{
		l = l / 16;
		i++;
	}
	print_hexa(c, k);
	return (i);
}
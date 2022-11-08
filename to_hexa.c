/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:38:36 by hlahwaou          #+#    #+#             */
/*   Updated: 2022/11/08 13:56:28 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	print_hexa(unsigned int c, int i)
{
	if (c <= 15 && c >= 0)
	{
		if (i == 1)
			write(1, &"0123456789ABCDEF"[c], 1);
		else if (i == 2)
			write(1, &"0123456789abcdef"[c], 1);
	}
	else
	{
		print_hexa(c / 16, i);
		print_hexa(c % 16, i);
	}
}

int	to_hexa(unsigned int c, int k)
{
	unsigned int	l;
	int				i;

	l = c;
	i = 0;
	if (l == 0)
		return (write(1, "0", 1), 1);
	while (l > 0)
	{
		l = l / 16;
		i++;
	}
	print_hexa(c, k);
	return (i);
}

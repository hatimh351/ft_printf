/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TO_HEXA1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:42:40 by hlahwaou          #+#    #+#             */
/*   Updated: 2022/11/08 13:56:31 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	print_hexa(unsigned long c)
{
	char	*str;

	if (c < 16 && c >= 0)
	{
		str = "0123456789abcdef";
		write(1, &str[c], 1);
	}
	else
	{
		print_hexa(c / 16);
		print_hexa(c % 16);
	}
}

int	to_hexa1(void *c)
{
	unsigned long	l;
	int				i;

	l = (unsigned long)c;
	write(1, "0x", 2);
	if (l == 0)
		return (write(1, "0", 1), 1);
	i = 0;
	while (l > 0)
	{
		l = l / 16;
		i++;
	}
	print_hexa((unsigned long)c);
	return (i);
}

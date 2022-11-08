/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_nbru.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 21:44:31 by hlahwaou          #+#    #+#             */
/*   Updated: 2022/11/07 22:06:59 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putnbr(unsigned int nbr)
{
	char	n;

	if (nbr <= 9 && 0 <= nbr)
	{
		n = nbr + 48;
		write(1, &n, 1);
	}
	else
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
}

int	ft_print_nbru(unsigned int n)
{
	unsigned int	nbr;
	int				i;

	nbr = n;
	i = 0;
	if (n == 0)
		i++;
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	ft_putnbr(nbr);
	return (i);
}

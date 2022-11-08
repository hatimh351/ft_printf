/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 15:04:51 by hlahwaou          #+#    #+#             */
/*   Updated: 2022/11/08 13:19:45 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	output(char *str,int *i, va_list ptr)
{
	if (str[*i] == '%')
	{
		(*i)++;
		if (str[*i] == 's')
			return ((*i)++,ft_putstr(va_arg(ptr,char *)));
		else if(str[*i] == 'd' || str[*i] == 'i')
			return ((*i)++,print_nbr(va_arg(ptr, int)));
		else if (str[*i] == 'X')
			return ((*i)++,to_hexa(va_arg(ptr,long), 1));
		else if (str[*i] == 'x')
			return ((*i)++,to_hexa(va_arg(ptr, long), 2));
		else if (str[*i] == 'p')
			return ((*i)++,to_hexa1(va_arg(ptr, void *)) + 2);
		else if (str[*i] == 'c')
			return ((*i)++,ft_putchar(va_arg(ptr, int)));
		else if (str[*i] == '%')
			return ((*i)++,write(1, "%", 1), 1);
		else if (str[*i] == 'u')
			return ((*i)++,ft_print_nbru(va_arg(ptr, unsigned int)));
	}
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	ptr;
	int		i;
	int		len;
	int		k;

	i = 0;
	va_start(ptr, str);
	len = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		k = output((char *)str, &i, ptr);
		if (k != 0)
		{
			len += k;
		}
		else if (str[i])
		{
			write(1, &str[i], 1);
			len++;
			i++;
		}
	}
	return (len);
}

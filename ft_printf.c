/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 15:04:51 by hlahwaou          #+#    #+#             */
/*   Updated: 2022/11/07 19:29:53 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int check(const char *str, int i)
{
	if (str[i] == '%')
	{
		i++;
		if (str[i] == 's')
			return (1);
		else if(str[i] == 'd' || str[i] == 'i')
			return (2);
		else if (str[i] == 'X')
			return (3);
		else if (str[i] == 'x')
			return (4);
		else if (str[i] == 'p')
			return (5);
		else if (str[i] == 'c')
			return (6);
		else if (str[i] == '%')
			return (7);
	}
	return (0);
}

static int	output(int i, va_list ptr)
{
	if (i == 1)	
		return (ft_putstr(va_arg(ptr,char *)));
	else if(i == 2)
		return (print_nbr(va_arg(ptr, int)));
	else if (i == 3)
		return (to_hexa(va_arg(ptr,long), 1));
	else if (i == 4)
		return (to_hexa(va_arg(ptr, long), 2));
	else if (i == 5)
			return (to_hexa1(va_arg(ptr, void *)) + 2);
	else if (i == 6)
		return (ft_putchar(va_arg(ptr, int)));
	else if (i == 7)
		return (write(1, "%", 1), 1);
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	ptr;
	int		i;
	size_t	len;
	size_t	k;

	i = 0;
	va_start(ptr, str);
	len = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		k = check(str, i) ;
		if (k != 0)
		{
			len += output(k,ptr);
			i += 2;
			continue;
		}
		if (str[i] != '\0')
			write(1, &str[i], 1);		
		i++;
		len++;
	}
	return (len);
}
// #include <stdio.h>
// int main()
// {
// 	ft_printf("%d",ft_printf("%%d %X"));
// 	printf("\n");
// 	printf("%d",printf("%%d %X"));
// }
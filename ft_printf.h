/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 15:24:36 by hlahwaou          #+#    #+#             */
/*   Updated: 2022/11/07 18:56:50 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int		ft_strlen(const char *str);
int		ft_putchar(char);
int		ft_putstr(char *);
int	ft_printf(const char *str, ...);
int		print_nbr(int nbr);
int		to_hexa(unsigned long, int);
int		to_hexa1(void *);

#endif 
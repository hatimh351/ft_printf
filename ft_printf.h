/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 15:24:36 by hlahwaou          #+#    #+#             */
/*   Updated: 2022/11/08 11:36:06 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int		ft_strlen(char *);
int		ft_putchar(char);
int		ft_putstr(char *);
int		ft_printf(const char *str, ...);
int		print_nbr(int nbr);
int		to_hexa(unsigned int, int);
int		to_hexa1(void *);
int		ft_print_nbru(unsigned int n);

#endif 
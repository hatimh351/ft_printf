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
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_strlen(char *n);
int	ft_putchar(char n);
int	ft_putstr(char *n);
int	ft_printf(const char *str n, ...);
int	print_nbr(int nbr);
int	to_hexa(unsigned int f, int n);
int	to_hexa1(void *l);
int	ft_print_nbru(unsigned int n);

#endif
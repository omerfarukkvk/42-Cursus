/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okavak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 13:11:12 by okavak            #+#    #+#             */
/*   Updated: 2022/06/02 22:10:47 by okavak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

int			ft_printf(const char *str, ...);
int			ft_check(va_list args, char letter);
int			ft_putchar(int c);
int			ft_putstr(char *s);
int			ft_printnumb(int n);
int			ft_printunumb(unsigned int n);
char*		ft_itoa(int n);
int			ft_printptr(unsigned long p, char *base, int cheker, int baselen);

#endif

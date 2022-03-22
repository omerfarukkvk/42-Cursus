/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okavak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 19:33:21 by okavak            #+#    #+#             */
/*   Updated: 2022/03/22 19:33:48 by okavak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

void	ft_putstr(char *str, int *res_val);
void	ft_putchar(char str, int *res_val);
void	ft_putnbr(int nb, int *res_val);
char	*ft_convert_base(size_t number, char *base_str);
void	ft_p_str(unsigned long number, int *res_val);
void	ft_put_u(unsigned int number, int *res_val);
size_t	ft_strlen(const char *str);
int		ft_printf(const char *str, ...);

#endif

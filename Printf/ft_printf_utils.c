/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okavak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 16:45:25 by okavak            #+#    #+#             */
/*   Updated: 2022/05/31 07:53:14 by okavak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if(s == NULL)
	{
		write(1,"(null)",6);
		return(6);
	}	
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
	return (i);
}

int	ft_putnumber(int n)
{
	int	length;

	length = 0;
	if (n == -2147483647)
	{
		length += ft_putstr("-2");
		length += ft_putstr("147483647");
	}
	if 
}

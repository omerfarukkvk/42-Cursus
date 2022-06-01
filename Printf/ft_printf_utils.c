/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okavak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 16:45:25 by okavak            #+#    #+#             */
/*   Updated: 2022/06/01 17:06:52 by okavak           ###   ########.fr       */
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

int	ft_step(int n)
{
	int	step;

	step = 0;
	if(n == 0)
		step++;
	if (n < 0)
		step++;
	if (n > 10)
	{
		n /= 10;
		step++;
	}
	return (step);
}


int	ft_printpercent(char c)
{
	write(1, "%", 1);
	return (1);
}

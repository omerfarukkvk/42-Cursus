/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okavak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 16:45:25 by okavak            #+#    #+#             */
/*   Updated: 2022/06/01 18:48:56 by okavak           ###   ########.fr       */
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

int	ft_printnumb(int n)
{
	char	*num;
	int	length;
	
	length = 0;
	num = ft_itoa(n);
	length = ft_putstr(num);
	free(num);
	return (length);
}

//int	ft_printptr(void *p)


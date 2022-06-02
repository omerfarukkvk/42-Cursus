/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okavak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 16:45:25 by okavak            #+#    #+#             */
/*   Updated: 2022/06/02 22:14:35 by okavak           ###   ########.fr       */
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

int	ft_printptr(unsigned long p, char *base, int cheker, int base_len)
{
	int		len;

	len = 0;
	if(cheker == 1)
		len += write(1, "0x", 2);
	if(p / base_len != 0)
		len += ft_printptr(p / base_len, base, 0, base_len);
	len += write(1, &base[p % base_len], 1);
	return(len);
}

int	ft_printunumb(unsigned int n)
{
	int	length;

	length = 0;
	if (n >= 0 && n <= 9)
		length += ft_putchar(n + '0');
	else
	{
		length += ft_printnumb(n / 10);
		length += ft_printnumb(n % 10);
	}
	return (length);
}

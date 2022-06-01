/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okavak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 13:08:10 by okavak            #+#    #+#             */
/*   Updated: 2022/06/01 19:29:08 by okavak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_check(va_list args, char letter)
{
	int	length;

	length = 0;
	if (letter == 'c')
		length += ft_putchar(va_arg(args, int));
	else if (letter == 's')
		length += ft_putstr(va_arg(args, char *));
	//else if (letter == 'p')
	//	length += ft_printptr(va_arg(args,void *));
	else if (letter == 'd' || letter == 'i')
		length += ft_printnumb(va_arg(args, int));
	//else if (letter == 'u')
	//	length += 
	//else if (letter == 'x' | letter == 'X')
	else if (letter == '%')
		write(1, "%", 1);
	else
		write(1, &letter, 1);
	return (length);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		length;

	i = 0;
	length = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			length += ft_check(args, str[i + 1]);
			i++;
		}
		else
			length += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (length);
}
int	main()
{
	ft_printf("%s", 0);
}

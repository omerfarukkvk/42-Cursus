/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okavak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 01:37:49 by okavak            #+#    #+#             */
/*   Updated: 2022/01/06 10:32:07 by okavak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

//verinin uzunluğunu kontrol eder.
int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (*str != '\0')
	{
		a++;
		str++;
	}
	return (a);
}
/*int	main()
{
	char a[]="Hello World";
	printf("%d",ft_strlen(&a[0]));
}*/

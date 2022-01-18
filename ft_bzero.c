/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okavak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 16:36:46 by okavak            #+#    #+#             */
/*   Updated: 2022/01/10 22:58:28 by okavak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//1.girilen pointeri verilen byte kadar "\0" yazdirir.
void	*ft_bzero(void *str, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)str;
	while (n)
	{
		*p = '\0';
		p++;
		n--;
	}
	return (p + n);
}
/*int	main()
{
	char a[] = "alfabetik";

	printf("%s",ft_bzero(&a, 3));
}*/

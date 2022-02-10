/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okavak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 12:50:58 by okavak            #+#    #+#             */
/*   Updated: 2022/02/09 12:51:45 by okavak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	int		tmp;
	int		index;

	index = 1;
	tmp = n;
	while (tmp && index++)
		tmp /= 10;
	str = (char *)malloc(sizeof(char) *((n < 0) + index + (n == 0)));
	if (!str)
		return (NULL);
	str += (n < 0) + index - 1 + (n == 0);
	*str = '\0';
	if (n == 0)
		*(--str) = '0';
	index = (n >= 0) * 2 - 1;
	while (n)
	{
		*(--str) = (n % (10 * index)) * index + '0';
		n /= 10;
	}
	if (index < 0)
		*(--str) = '-';
	return (str);
}

/*int main()
{
    printf("%s", ft_itoa(-68768));
}*/

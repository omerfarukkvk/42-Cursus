/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okavak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 16:10:46 by okavak            #+#    #+#             */
/*   Updated: 2022/01/30 17:09:54 by okavak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//yer ayırırken belleğin içinde bi değer varsa içine null atar.
void	*ft_calloc(size_t count, size_t size)
{
	void	*array;

	array = (char *)malloc(count * size);
	if (!array)
		return (NULL);
	return (ft_memset(array, 0, size * count));
}
/*int	main(void)
{
	size_t	x = 5;
	size_t	y = 2;
	int		q = 10;

	void *z = ft_calloc(x,y);

	while (q <= 20)
	{
		printf("%p", (char *)z);
		q++;
	}
}*/
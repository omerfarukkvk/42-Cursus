/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okavak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 18:30:16 by okavak            #+#    #+#             */
/*   Updated: 2022/01/18 01:55:53 by okavak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	i;
	int	j;
	size_t	length;

	length = ft_strlen(dst);
	if (size > 0 && size > length)
	{
		i = length;
		j = 0;
		while (src[j] && i < (int)size - 1)
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		dst[i] = '\0';
		return (length + ft_strlen(src));
	}
	return (size + ft_strlen(src));
}
int	main()
{
	char	a[]	= "omer";
	char	b[] = "faruk";

	printf("%zu",ft_strlcat(a,b,3));
}

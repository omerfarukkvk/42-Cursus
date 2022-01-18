/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okavak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 17:33:08 by okavak            #+#    #+#             */
/*   Updated: 2022/01/17 18:29:59 by okavak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (!dst || !src)
		return (0);
	while (src[i] && i < dstsize)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (ft_strlen(src));
}
/*int	main()
{
	char	a[] = "omer";
	char	b[] = "faruk";
	ft_strlcpy(&a[0],&b[0],4);
	//printf("%zu", ft_strlcpy(a,b,2));
	printf("a verisi %s\nb verisi %s",a,b);
}*/

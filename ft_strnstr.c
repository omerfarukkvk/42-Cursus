/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okavak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 12:18:25 by okavak            #+#    #+#             */
/*   Updated: 2022/01/18 12:19:54 by okavak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//size kadar tarar ve s2 elemanı ve sonrarsını döner.
char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t		position;

	if (*to_find == '\0')
		return ((char *)str);
	position = ft_strlen((char *)to_find);
	while (*str != '\0' && len-- >= position)
	{
		if (*str == *to_find && ft_memcmp(str, to_find, position) == 0)
			return ((char *)str);
		str++;
	}
	return (NULL);
}
/*int	main()
{
	printf("%s",ft_strnstr("merhaba","a",5));
}*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okavak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 20:54:49 by okavak            #+#    #+#             */
/*   Updated: 2022/01/31 00:03:28 by okavak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	index;

	if (ft_strlen(s) < len)
		len = ft_strlen(s);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	index = 0;
	while (len--)
		res[index++] = s[start++];
	res[index] = '\0';
	return (res);
}
/*int	main()
{
	printf("%s",ft_substr("deneme", 2, 4));
}*/

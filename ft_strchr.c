/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okavak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 11:53:04 by okavak            #+#    #+#             */
/*   Updated: 2022/01/30 17:45:24 by okavak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (unsigned char) c)
			return ((char *)s);
		s++;
	}
	if ((unsigned char)c == '\0')
		return ((char *) s);
	return ((char *) NULL );
}
/*int	main()
{
	char a[] = "bilgisayargagası";

	printf("%s",ft_strchr(a, 'g'));
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okavak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 23:30:11 by okavak            #+#    #+#             */
/*   Updated: 2022/01/31 00:04:47 by okavak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*omer;
	int		i;
	int		i2;

	i = 0;
	i2 = 0;
	if (!s1 || !s2)
		return (0);
	omer = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	while (s1[i])
	{
		omer[i] = s1[i];
		i++;
	}
	while (s2[i2])
	{
		omer[i++] = s2[i2];
		i2++;
	}
	omer[i] = '\0';
	return (omer);
}
/*int	main()
{
	char *a;
	a = ft_strjoin("ahmet", "mehmet");
	printf("%s", a);
}*/

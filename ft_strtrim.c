/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okavak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 02:28:15 by okavak            #+#    #+#             */
/*   Updated: 2022/02/02 03:46:24 by okavak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char const *str;

	str = malloc(sizeof(char) * ft_strlen(s1));
	
}
int	main()
{
	printf("%s", ft_strtrim("deneme","en"));
}

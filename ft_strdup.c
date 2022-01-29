/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okavak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 17:28:11 by okavak            #+#    #+#             */
/*   Updated: 2022/01/29 17:28:13 by okavak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *s1)
{
    char    *str;
    int str_len;

    str_len = ft_strlen(s1) + 1;
    if ((str = malloc(str_len)))
    {
        ft_strlcpy(str, s1, str_len);
        return (str);
    }
    return (NULL);
}
/*int main()
{
    printf("%s",ft_strdup("deneme"));
}*/
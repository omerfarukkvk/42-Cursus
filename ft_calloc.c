/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okavak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 16:10:46 by okavak            #+#    #+#             */
/*   Updated: 2022/01/29 16:10:49 by okavak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t count, size_t size)
{
    void    *array;

    if(!(array = (char *)malloc(size * count)))
        return (NULL);
    return (ft_memset(array, 0,size * count));
}
/*int main()
{
    printf("%s",ft_calloc());
}*/
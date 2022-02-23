/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okavak <okavak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 04:26:22 by okavak            #+#    #+#             */
/*   Updated: 2022/02/04 04:33:47 by okavak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//liste üzerinde dolaşıp yazılan fonksiyonu tüm karakterlere uygular.
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, s + i);
		i++;
	}
}
/*void	ft_f(unsigned int a, char* b)
{
	printf("%d %c\n",a,*b);
}
int	main()
{
	char a[]="omerfaruk";

	ft_striteri(a, ft_f);
}*/

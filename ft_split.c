/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okavak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 00:12:42 by okavak            #+#    #+#             */
/*   Updated: 2022/01/31 02:17:52 by okavak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int    kelime(char *str, char c)
{
    int    i;
    int    a;
    int    control;

    i = 0;
    a = 0;
    control = 0;
    while (str[i])
    {
        if (str[i] != c && control == 0)
        {
            a++;
            control = 1;
        }
        else if (str[i] == c)
            control = 0;
        i++;
    }
    return (a);
}

char    *word_len(int start, int end, char *s)
{
    char *osman;
    int    i;

    i = 0;
    osman = malloc(sizeof(char) * end - start + 1);
    if (!osman)
        return (0);
    while (start < end)
    {
        osman[i] = s[start];
        start++;
        i++;
    }
    osman[i] = 0;
    return (osman);
}

char    **ft_split(char const *s, char c)
{
    char    **str;
    int        word;
    int        end;
    int        start;
    int        index;

    end = 0;
    start = -1;
    index = 0;
    word = kelime(s, c);
    str = (char **)malloc(sizeof(char *) * (word + 1));
    if (!str)
        return (0);
    while (word-- >= 0)
    {
        while (s[end] != 0)
        {
            if (s[end] != c && start == -1)
            {
                start = end;
            }
            else if (s[end] == c || s[end + 1] == 0)
            {
              if (s[end + 1] == 0)
                end++;
                
                str[index] = word_len(start, end, s);
                index++;
                start = -1;
            }
            end++;
        }
    }
    str[index] = 0;
    return (str);
}
int    main()
{
    char    **s;
    s = ft_split("ahmet,mehmet", ',');
}

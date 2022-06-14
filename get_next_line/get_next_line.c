/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okavak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 12:42:39 by okavak            #+#    #+#             */
/*   Updated: 2022/06/13 20:51:12 by okavak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_fit_buff(int fd, char *left_str)
{
	char	*buff;
	int		rd_bytes;

	buff = malloc(sizeof (char) * (BUFFER_SIZE + 1));
	if (!buff)
		return (NULL);
	rd_bytes = 1;
	while (!ft_strchr(left_str, '\n') && rd_bytes != 0)
	{
		rd_bytes = read(fd, buff, BUFFER_SIZE);
		if (rd_bytes == -1)
		{
			free(buff);
			free(left_str);
			return (NULL);
		}
		buff[rd_bytes] = '\0';
		left_str = ft_strjoin(left_str, buff);
	}
	free(buff);
	return (left_str);
}

char	*get_next_line(int fd)
{
	char			*line;
	static char		*left_str;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	left_str = ft_fit_buff(fd, left_str);
	if (!left_str)
		retrun (NULL);
	line = ft_catch_new_line(left_str);
	left_str = ft_new_next_str(left_str);
	return (line);
}

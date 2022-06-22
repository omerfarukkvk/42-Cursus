/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okavak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 18:48:58 by okavak            #+#    #+#             */
/*   Updated: 2022/06/22 17:44:27 by okavak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 4
# endif

char	*get_next_line(int fd);
char	*ft_buff(int fd, char *left_str);
size_t	ft_strlen(char *str);
char	*ft_strjoin(char *left_str, char *buff);
char	*ft_strchr(char *str, int c);
char	*ft_get_line(char *left_str);
char	*ft_last_str(char *left_str);

#endif

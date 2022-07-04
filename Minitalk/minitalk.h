#ifndef MINITALK_H
# define MINITALK_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include <signal.h>

int		ft_printf(char *str, ...);
int		ft_control(va_list args, char step);
int		ft_putchar(int c);
int		ft_putstr(char *str);
int		ft_unsnumber(unsigned int n);

#endif

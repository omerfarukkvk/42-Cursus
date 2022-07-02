#include "minitalk.h"

int	ft_unsnumber(unsigned int n)
{
	int				len;
	unsigned int	i;
	char			str[10];

	len = 0;
	i = 0;
	if (n == 0)
		len += ft_putchar('0');
	while (n)
	{
		str[i++] = (n % 10) + '0';
		n /= 10;
	}
	while (i--)
		len += ft_putchar(str[i]);
	return (len);
}

int	ft_putstr(char *str)
{
	int	i;

	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
	return (i);
}

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_control(va_list args, char step)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	if (step == 'c')
		len += ft_putchar(va_arg(args, int));
	else if (step == 'd')
		len += ft_unsnumber(va_arg(args, unsigned int));
	else if (step == 's')
		len += ft_putstr(va_arg(args, char *));
	else
		len += ft_putchar(step);
	return (len);
}

int	ft_printf(char *str, ...)
{
	va_list	args;
	int		i;
	int		len;

	i = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
			len += ft_control(args, str[i + 1]);
		else
			len += ft_putchar(str[i]);
	}
	va_end(args);
	return (len);
}
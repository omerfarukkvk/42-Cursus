#include "minitalk.h"

int	ft_atoi(const char *str)
{
	long int	snc;

	snc = 0;
	while (*str >= '0' && *str <= '9')
	{
		snc = (snc * 10) + (*str - 48);
		str++;
	}
	return (snc);
}

void	ft_take(pid_t pid, int c)
{
	int n;
	int	byt;
	unsigned char ch;

	ch = c;
	byt = 8;
	n = 128;
	while (byt--)
	{
		if (ch / n)
		{
			ch -= n;
			kill(pid, SIGUSR1);
		}
		else
			kill(pid, SIGUSR2);
		usleep(150);
		n /= 2;
	}
}

int	main(int argc, char **argv)
{
	int		pid;
	int		i;
	char	*msg;
	
	i = 0;
	if (argc == 3)
	{
		pid = ft_atoi(argv[1]);
		msg = argv[2];
		while (msg[i])
		{
			ft_take(pid, msg[i]);
			i++;
		}
	}
	else
	{
		ft_printf("Wrong!");
		return (0);
	}
}
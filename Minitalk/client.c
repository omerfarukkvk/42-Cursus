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

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		ft_printf("Hatalı!\n");
		return (0);
	}
	ft_printf("%d\n",ft_atoi(argv[1]));
}
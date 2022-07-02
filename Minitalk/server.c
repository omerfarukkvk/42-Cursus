#include "minitalk.h"

int	main(void)
{
	ft_printf("PID: %d\n", getpid());
	while(1)
		pause();
	return 0;
}
int	atoi(const char *str)
{
	int	neg;
	int snc;

	snc = 0;
	neg = 1;
	while (*str == ' ' || *str == '\t' || *str == '\r' ||
			*str == '\n' || *str == '\v' || *str == '\f')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			neg  = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		snc = (snc * 10) + (*str - 48);
		str++;
	}
	return (snc * neg);
}
#include <stdio.h>
int	main()
{
	printf("%d", atoi("-235"));
}

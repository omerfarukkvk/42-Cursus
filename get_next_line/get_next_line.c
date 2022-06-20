#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char				*line;
	static char			*left_str;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	
}
#include "so_long.h"

void	check_map(char *str)
{
	//count lines on map

	//copy lines to map_string
	solong()->fd = open(str, O_RDONLY);
	if (solong()->fd <= 0)
		exit_log("Cannot open file");
	printf("%d\n", solong()->fd);
	printf("%s", get_next_line(solong()->fd));
}
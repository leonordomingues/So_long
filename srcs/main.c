#include "so_long.h"

t_solong	*solong(void)
{
	static t_solong	solong;

	return (&solong);
}

int	main (int ac, char **av)
{
	if (ac == 2)
	{
		solong();
		check_args(av[1]);
		// printf("%d", solong()->fd);
	}
	else
		ft_printf("incorrect number of arguments");
}
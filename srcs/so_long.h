#ifndef SO_LONG_H
#define SO_LONG_H

#include "../mlx/mlx.h"
#include "../libft/ft_printf.h"

typedef struct s_map
{
	char **map_string;
} t_map;

typedef struct s_solong
{
	int fd;
	t_map map;
} t_solong;

t_solong *solong();

//PARSE.C
void check_args(char *str);

//MAP.C
void	check_map(char *str);

//UTILS.C
void exit_log(char *str);


#endif
NAME		= so_long

SRCS		= $(wildcard srcs/*.c)

OBJS		= $(SRCS:%.c=%.o)

LIBFTA		= ./libft/libft.a

MLX		= ./mlx/libmlx.a

MLX_FLAGS	= -framework OpenGL -framework AppKit

LINKS		= -L mlx -lmlx -L libft

INCLUDES	= -I mlx -I libft -I .

CC		= gcc# -Wall -Wextra -Werror -g -fsanitize=address

RM		= rm -f

.c.o:
			$(CC) -c $< -o $@

all:		$(NAME)

$(NAME): 	 $(MLX) $(LIBFTA) $(OBJS)
			$(CC) $(MLX) $(LIBFTA) $(MLX_FLAGS) $(OBJS) -o $(NAME)
			@echo "$(GREEN)Successfully built --> $(YELLOW)$(NAME)$(DEFAULT)"

$(MLX):
			make -C mlx

$(LIBFTA):
			make -C libft

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)
			make -C libft fclean
			make -C mlx clean
			@echo "$(RED)Files Removed!$(DEFAULT)"

re:			fclean all

.PHONY:		all clean re fclean

god:
			git status
			git add .
			git status
			git commit -m "🔥Random Makefile Commit🔥"
			git status

#COLORS
GREEN = \033[1;32m
RED = \033[1;31m
DEFAULT = \033[0m
YELLOW = \033[1;33m

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kwiessle <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/03/24 13:54:00 by kwiessle          #+#    #+#              #
#*   Updated: 2016/03/29 17:02:03 by kwiessle         ###   ########.fr       *#
#                                                                              #
# **************************************************************************** #

NAME = fdf

SRCS = srcs/main.c srcs/read_file.c

OBJS = $(SRCS:.c=.o)
INCLUDES =-I libft -I includes -I mlx
LIBS = -L libft/ -lft -L mlx/ -lmlx
FLAGS = -Wall -Werror -Wextra
FRAMEWORKS = -framework Appkit -framework OpenGL

$(NAME):	$(OBJS)
	@make -C libft/ re
	@make -C mlx/ re
	@gcc -o $(NAME) $(OBJS) $(LIBS) $(FRAMEWORKS)
	@echo "Compilation Succeed"

$(OBJ): %.o: %.c
	@gcc $(FLAGS) $(INCLUDES) -c $< -o $@

all:		$(NAME)

clean:
	rm -f	$(OBJS)

fclean:	clean
	rm -f	$(NAME)
	@make -C libft/ fclean
	@make -C mlx/ clean

re:	fclean all

.PHONY: all clean fclean re

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kwiessle <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/03/24 13:54:00 by kwiessle          #+#    #+#              #
#    Updated: 2016/03/24 14:14:26 by kwiessle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf

SRC =

OBJS = $(SRCS:.c=.o)
INCLUDES =-I libft -I includes
LIBS = -L libft/ -lft
FLAGS = -Wall -Werror -Wextra

$(NAME):	$(OBJS)
	@make -C libft/ re
	@gcc -o $(NAME) $(OBJS)
	@echo "Compilation Succeed"

$(OBJ): %.o: %.c
	@gcc $(NAME) $(OBJS) $(LIBS) -c $< -o $@

all:		$(NAME)

clean:
	rm -f	$(OBJS)

fclean:
	rm -f	$(NAME)
	@make -C libft/ fclean

re:
	fclean all

.PHONY: all clean fclean re

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahtuncay <ahtuncay@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/17 21:59:46 by ahtuncay          #+#    #+#              #
#    Updated: 2023/10/17 22:00:02 by ahtuncay         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
FLAG = -Wall -Wextra -Werror
RM = rm -rf
NAME_C = client
NAME_S = server
SRC_C = client.c
SRC_S = server.c
LIBFT_PATH = ./Libft
LIBFT = $(LIBFT_PATH)/libft.a

all:
	make -C $(LIBFT_PATH)
	$(CC) $(FLAG) $(SRC_C) $(LIBFT) -o $(NAME_C)
	$(CC) $(FLAG) $(SRC_S) $(LIBFT) -o $(NAME_S)

clean:
	make clean -C $(LIBFT_PATH)

fclean:
	make fclean -C $(LIBFT_PATH)
	$(RM) $(NAME_C)
	$(RM) $(NAME_S)

re: fclean all

.PHONY: all clean fclean re
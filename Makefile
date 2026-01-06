# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: minpple <minpple@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/06 07:16:19 by minpple           #+#    #+#              #
#    Updated: 2026/01/06 08:03:37 by minpple          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
FILES = algo.c \
		check.c \
		cleaner.c \
		main.c \
		parsing.c \
		radix.c \
		rotate_n_reverse.c \
		same_time.c \
		swap_n_push.c \
		trindex.c \
		utils_algo.c \
		utils_stack.c \
		utils.c \

LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

CC = cc
FLAGS = -Wall -Werror -Wextra
OBJ = $(FILES:.c=.o)
INCLUDES = -I$(LIBFT_DIR)

all : $(LIBFT) $(NAME)

$(LIBFT):
	make -C $(LIBFT_DIR)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(NAME): $(OBJ) $(LIBFT)
	$(CC) $(OBJ) -L$(LIBFT_DIR) -lft -o $(NAME)

clean:
	make clean -C $(LIBFT_DIR)
	rm -rf $(OBJ)

fclean: clean
	make fclean -C $(LIBFT_DIR)
	rm -rf $(NAME)

re: fclean all

.PHONY : all clean fclean re

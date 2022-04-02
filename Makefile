# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lzima <marvin@42lausanne.ch>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/28 14:48:27 by lzima             #+#    #+#              #
#    Updated: 2022/02/28 14:48:48 by lzima            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC					=	index.c \
						error_check.c \
						libft_1.c \
						libft_2.c \
						operations.c \
						algo_spec.c \
						algo_utils.c \
						algo.c \
						main.c

OBJS				=	$(SRC:.c=.o)

CC					= 	gcc
RM					=	rm -f
CFLAGS				= 	-Wall -Wextra -Werror -g -fsanitize=address


NAME				= push_swap


$(NAME):		$(OBJS)
						$(CC) $(CFLAGS) -o $(NAME) $(OBJS)
#.c.o:
#						${CC} ${CFLAGS} -c $< -o ${<:.c=.o}
all:			$(NAME)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)



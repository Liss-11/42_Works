# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: afrolova <afrolova@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/12 00:19:49 by afrolova          #+#    #+#              #
#    Updated: 2022/08/16 00:11:52 by afrolova         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

	#COLORS

END_COLOR = \033[0;0m
GRAY = \033[0;90m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;94m
MAGENTA = \033[0;95m
CYAN = \033[0;96m
WHITE = \033[0;97m

	#DIRECTORIES

DIR_OBJ = OBJ
DIR_SRCS = SRCS

	#LIBFT

LIBFT =			Libft/libft.a
HEADER_LIBFT =	Libft/libft.h
	
	#FILES

SRCS = 	main.c \
	   	check_errors.c \
		push_swap.c \
		order_assign.c \
		two_algorithm.c \
		three_algorithm.c \
		five_algorithm.c \
		ten_algorithm.c \
		one_hundred_algorithm.c

OBJS = $(addprefix $(DIR_OBJ)/, $(SRCS:.c=.o))

	#VARIABLES

NAME =		push_swap
CFLAGS =	-Wall -Werror -Wextra
CC =		gcc 
RM =		rm -rf
HEADER =	INC/push_swap.h

all:	$(DIR_OBJ) $(LIBFT) $(NAME)	
			@echo "${MAGENTA}Nothiing to do!${END_COLOR}"

$(NAME):	$(OBJS) 
			$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)
			@echo "${GREEN}All is DONE!${END_COLOR}"


$(DIR_OBJ)/%.o:	$(DIR_SRCS)/%.c $(HEADER)
				$(CC) -IINC -ILibft $(CFLAGS) -c $< -o $@
				@$(CC) -IINC $(CFLAGS) -c $< -o $@

$(DIR_OBJ):
			@-mkdir OBJ

$(LIBFT):	$(HEADER_LIBFT)	
			make -C libft


clean:	
		$(RM) $(OBJS)
		make clean -C libft
		$(RM) $(DIR_OBJ)
		@echo "${BLUE}All Objects are removed!${END_COLOR}"

fclean:	clean
		$(RM) $(NAME)
		make fclean -C libft
		@echo "${BLUE}ALL CLEANED!${END_COLOR}"

re:		fclean
		${MAKE}	
		@echo "${YELLOW}Cleaned und rebuilt everything for push_swap${END_COLOR}"
		
.PHONY:	all clean fclean re 

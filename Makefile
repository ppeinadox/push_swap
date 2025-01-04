NAME     = push_swap

CC       = gcc

FLAGS    = -Wall -Wextra -Werror

LIBFT = libft.a

SRCS     =      big_sort.c \
		list_functions.c \
                list_functions_cont.c \
                little_sort.c \
                push.c \
                push_swap.c \
                push_swap_utils.c \
                reverse_rotate.c \
                rotate.c \
                sort_array.c \
                sort_utils.c \
                swap.c \
                          
OBJS      = $(SRCS:.c=.o)

.c.o:
	${CC} ${FLAGS} -c $< -o ${<:.c=.o}

CLR_RMV		:= \033[0m
RED		    := \033[1;31m
GREEN		:= \033[1;32m
YELLOW		:= \033[1;33m
BLUE		:= \033[1;34m
CYAN 		:= \033[1;36m
RM		    := rm -f

${NAME}:	${OBJS}
			@echo "$(GREEN)Compilation ${CLR_RMV}of ${YELLOW}$(NAME) ${CLR_RMV}..."
			${CC} ${FLAGS} -o ${NAME} ${OBJS} libft.a
			@echo "$(GREEN)$(NAME) created[0m ✔️"

all:		${NAME}

clean:
			@ ${RM} *.o */*.o */*/*.o
			@ echo "$(RED)Deleting $(CYAN)$(NAME) $(CLR_RMV)objs ✔️"

fclean:		clean
			@ ${RM} ${NAME}
			@ echo "$(RED)Deleting $(CYAN)$(NAME) $(CLR_RMV)binary ✔️"

re:			fclean all

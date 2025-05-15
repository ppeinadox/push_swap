NAME     = push_swap

CC       = gcc
FLAGS    = -Wall -Wextra -Werror
RM       = rm -f
LIBFT    = libft.a

SRCS     = big_sort.c \
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
           swap.c

OBJS     = $(SRCS:.c=.o)

.c.o:
	${CC} ${FLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	${CC} ${FLAGS} -o ${NAME} ${OBJS} ${LIBFT}

all: ${NAME}

clean:
	@${RM} *.o

fclean: clean
	@${RM} ${NAME}

re: fclean all

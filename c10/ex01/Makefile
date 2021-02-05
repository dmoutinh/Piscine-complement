NAME	= ft_cat

CC 		= gcc

SRC		= ft_cat.c

OBJ 	= ft_cat.o

CFLAGS	= -c -Wall -Wextra -Werror

RM 		= rm -f

${NAME}:	
			${CC} ${CFLAGS} ${SRC}
			${CC} ${OBJ} -o ${NAME}

all:		${NAME}


clean:	
			${RM} ${OBJ}

fclean:		clean
			${RM} ${NAME}

re:			fclean
			make

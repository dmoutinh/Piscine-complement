NAME	= libft.a

SRCS	= srcs/*.c

INCLUDES=  includes/*.h

CFLAGS	= -Wall -Wextra -Werror

RM 		= rm -f

${NAME}:	
			gcc -c ${CFLAGS} ${SRCS} -I ${INCLUDES}
			ar -cr ${NAME} *.o

all:		${NAME}

make:	
			make all

clean:	
			${RM} *.o

fclean:		clean
			${RM} ${NAME}

re:			fclean
			make

NAME		=	Colleen
SRC			=	Colleen.c
CC			=	gcc
CFLAGS		=	-Wall -Werror -Wextra
RM			=	rm -f

all:		$(NAME)

$(NAME):	$(SRC)
			$(CC) $(CFLAGS) -o $(NAME) $(SRC)

clean:
			$(RM) $(NAME)

fclean:		clean

re:			fclean all

.PHONY:		all clean fclean re
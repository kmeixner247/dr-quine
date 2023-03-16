NAME		=	Sully
SRC			=	Sully.c
CC			=	gcc
CFLAGS		=	-Wall -Werror -Wextra
RM			=	rm -f
CHILDS		=	Sully_4 Sully_3 Sully_2 Sully_1 Sully_0
CHILDSC		=	Sully_4.c Sully_3.c Sully_2.c Sully_1.c Sully_0.c

all:		$(NAME)

$(NAME):	$(SRC)
			$(CC) $(CFLAGS) -o $(NAME) $(SRC)

clean:
			$(RM) $(NAME)

fclean:		clean
			$(RM) $(CHILDS) $(CHILDSC)

re:			fclean all

.PHONY:		all clean fclean re
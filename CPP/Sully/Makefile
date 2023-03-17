NAME		=	Sully
SRC			=	Sully.cpp
CC			=	c++
CFLAGS		=	-Wall -Werror -Wextra
RM			=	rm -f
CHILDS		=	Sully_4 Sully_3 Sully_2 Sully_1 Sully_0
CHILDSC		=	Sully_4.cpp Sully_3.cpp Sully_2.cpp Sully_1.cpp Sully_0.cpp

all:		$(NAME)

$(NAME):	$(SRC)
			$(CC) $(CFLAGS) -o $(NAME) $(SRC)

clean:
			$(RM) $(NAME)

fclean:		clean
			$(RM) $(CHILDS) $(CHILDSC)

re:			fclean all

.PHONY:		all clean fclean re
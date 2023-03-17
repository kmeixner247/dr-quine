NAME		=	Grace
SRC			=	Grace.cpp
CC			=	c++
CFLAGS		=	-Wall -Werror -Wextra
RM			=	rm -f

all:		$(NAME)

$(NAME):	$(SRC)
			$(CC) $(CFLAGS) -o $(NAME) $(SRC)

clean:
			$(RM) $(NAME)

fclean:		clean
			$(RM) Grace_kid.cpp

re:			fclean all

.PHONY:		all clean fclean re
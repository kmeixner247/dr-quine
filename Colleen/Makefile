NAME		=	Colleen
SRC			=	Colleen.c

all:		$(NAME)

$(NAME):	$(SRC)
			$(CC) $(CFLAGS) -o $(NAME) $(SRC)

clean:
			$(RM) -f $(NAME)

fclean:		clean

re:			fclean all

.PHONY:		all clean fclean re
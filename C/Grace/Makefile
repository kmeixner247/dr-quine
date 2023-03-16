NAME		=	Grace
SRC			=	Grace.c
RM			=	rm -f

all:		$(NAME)

$(NAME):	$(SRC)
			$(CC) $(CFLAGS) -o $(NAME) $(SRC)

clean:
			$(RM) $(NAME)

fclean:		clean
			$(RM) Grace_kid.c

re:			fclean all

.PHONY:		all clean fclean re
NAME		=	Grace
SRC			=	Grace.s
OBJ			=	$(SRC:.s=.o)
NASM		=	nasm
NASM_FLAGS	=	-f macho64
CC			=	gcc
CFLAGS		=	-Wall -Werror -Wextra
RM			=	rm -f

%.o:			%.s
				$(NASM) $(NASM_FLAGS) $< 

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

clean:		
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)
			$(RM) Grace_kid.s

re:			fclean all

.PHONY:		all clean fclean re
NAME		=	Sully
SRC			=	Sully.s
OBJ			=	$(SRC:.s=.o)
NASM		=	nasm
NASM_FLAGS	=	-f macho64
CC			=	gcc
CFLAGS		=	-Wall -Werror -Wextra -g -fsanitize=address
RM			=	rm -f
CHILDS		=	Sully_4 Sully_3 Sully_2 Sully_1 Sully_0
CHILDSC		=	Sully_4.s Sully_3.s Sully_2.s Sully_1.s Sully_0.s
CHILDSO		=	$(CHILDSC:.s=.o)

%.o:			%.s
				$(NASM) $(NASM_FLAGS) $< 

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

clean:		
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)
			$(RM) $(CHILDS) $(CHILDSC) $(CHILDSO)

re:			fclean all

.PHONY:		all clean fclean re

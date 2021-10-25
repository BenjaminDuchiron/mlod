##
## 
## Makefile
## File description:
## Makefile of Spitofy
##

DIR	=	src/

SRC	=	linkedListFonctionsExternes.c \
		linkedListOfMusic.c \
		Spitofy.c\
		../V1-correction/linkedList.c

CFLAGS	=	-W -Wall -std=gnu99 -g

LFLAGS	=	

OBJ	=	$(SRC:.c=.o)

NAME	=	spitofy

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(CFLAGS) $(LFLAGS)

clean:
	rm -f $(OBJ)

fclean:	clean
	make fclean -C $(LIB_DIR)
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
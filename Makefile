NAME = push_swap

SRC = main.c ft_atol.c  validations.c sort4-5.c\
 pabs.c sabs.c ft_putstr.c rabs.c rrabs.c sort2-5.c lsts.c sorter.c\

CC = cc

LIBRARY = push_swap.h
OBJ = $(SRC:.c=.o)

CFLAGS = -Wall -Werror -Wextra
all : $(NAME)

$(NAME) : $(OBJ) $(LIBRARY)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean :
	 rm -f $(OBJ)
fclean : clean
	rm -f $(NAME)
re : fclean all

.PHONY : all re fclean clean

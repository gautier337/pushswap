##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## compile
##

NAME = push_swap

SRC	=	main.c \
		src/pushswap.c \
		src/lib/my_lenght_int.c \
		src/lib/my_getnbr.c \
		src/lib/my_putstr.c \
		src/lib/my_putchar.c \
		src/lib/my_putnbr.c \
		src/lib/my_strlen.c \
		src/lib/get_little_number.c \
		src/sort/functions.c \
		src/errors_handling/error_handler.c \
		src/define/define_my_struct.c \

OBJ	= $(SRC:.c=.o)

CFLAGS = -I./includes

all: $(NAME)

$(NAME): $(OBJ)
	gcc -o $(NAME) $(OBJ) $(LDFLAGS)
	make clean

clean:
	rm -f $(OBJ)
	rm -f a.out

fclean: clean
	rm -f $(NAME)

re: fclean all
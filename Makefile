NAME = libftprintf.a
FILES = ft_putchr.c\
		ft_strchr.c\
		ft_putstr.c\
		ft_putnbr_base.c\
		ft_printf.c\
		ft_putnbr.c


CFLAGS =  -Wall -Wextra -Werror
OBJ = $(FILES:.c=.o)

all : $(NAME)

$(NAME): $(OBJ)
	ar -rc $(NAME) $(OBJ)
$(OBJ) : $(FILES)
	cc $(FILES) -c $(FILES)
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all
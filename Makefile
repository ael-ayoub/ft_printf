SRC = ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putnbr_fd.c \
	ft_printf.c \
	ft_putddr.c \
	ft_putnbr_u.c \
	ft_atoi_base.c \

OBG = $(SRC:.c=.o)

NAME = libftprintf.a



all: $(NAME)


$(NAME):$(OBG)
	ar rsc $(NAME) $(OBG)

clean:
	rm -f $(OBG)

fclean: clean
	rm -f $(NAME)

re: fclean all

m: re 
	rm -f $(OBG)

.PHONY: all clean fclean re

SRC = ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putnbr_fd.c \
	ft_printf.c \
	ft_putddr.c 

OBG = $(SRC:.c=.o)

NAME = libft.a



all: $(NAME)


$(NAME):$(OBG)
	ar rsc $(NAME) $(OBG)

clean:
	rm -f $(OBG)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
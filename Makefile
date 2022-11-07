SRC = TO_HEXA1.c ft_printf.c ft_putchar.c ft_putnbr.c ft_putstr.c ft_strlen.c to_hexa.c
cc = cc -Wall -Wextra -Werror
OBJCT = $(SRC:%.c=%.o)
NAME = libftprintf.a
all = $(NAME)

$(NAME) :ft_printf.h $(OBJCT)

%.o : %.c ft_printf.h
	$(cc) -c $<
	ar rc $(NAME) $@
clean:
	rm -rf $(OBJCT)
fclean : clean
	rm -rf $(NAME)
re : fclean $(NAME)
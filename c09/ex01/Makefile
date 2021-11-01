SRC = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
GCC = gcc -Wall -Wextra -Werror
NAME = libft.a
OBJECTS = $(addprefix srcs/,$(SRC:.c=.o))
HEADER = includes

.c.o:
	$(GCC) -I $(HEADER) -c $< -o $(<:.c=.o)
$(NAME):$(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)
all: $(NAME)

clean:
	rm -f $(OBJECTS)
fclean:
	rm -f $(NAME)
re: fclean all

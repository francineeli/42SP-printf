NAME = libftprintf.a

INCLUDE = ft_printf.h	

FLAGS = -Wall -Werror -Wextra

RM = rm -f

FUNCTIONS = ft_printf.c ft_printchar.c ft_printstr.c ft_printhex.c\
	       	ft_printptr.c ft_itoa.c ft_utoa.c

OBJS = ft_printf.o ft_printchar.o ft_printstr.o ft_printhex.o\
       ft_printptr.o ft_itoa.o ft_utoa.o

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

$(OBJS): $(FUNCTIONS)
	clang $(FLAGS) -I $(INCLUDE) -c $(FUNCTIONS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

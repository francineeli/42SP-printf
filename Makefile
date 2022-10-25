NAME = libftprintf.a

INCLUDE = ft_printf.h	

FLAGS = -Wall -Werror -Wextra

RM = rm -f

FUNCTIONS = ft_printf.c ft_printc.c ft_prints.c ft_printx.c\
	       	ft_printp.c ft_printi.c ft_printu.c

OBJS = ft_printf.o ft_printc.o ft_prints.o ft_printx.o\
       ft_printp.o ft_printi.o ft_printu.o

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

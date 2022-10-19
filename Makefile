NAME = libftprintf.a

INCLUDE = printf.h	

CCFLAGS = -Wall -Werror -Wextra

RM = rm -f

FUNCTIONS = ft_printf.c ft_printf_utils.c ft_printchar.c ft_printstr.c\
	       	ft_printhex.c ft_printheX.c ft_printptr.c ft_itoa.c ft_utoa.c	

OBJS = ft_printf.o ft_printf_utils.o ft_printchar.o ft_printstr.o\
       ft_printhex.o ft_printheX.o ft_printptr.o ft_itoa.o ft_utoa.o

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

$(OBJ): $(FUNCTIONS)
	cc $(FLAGS) -I $(INCLUDE) -c $(FUNCTIONS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

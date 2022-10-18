NAME = libftprintf.a

CCFLAGS = -Wall -Werror -Wextra

SRC_PATH = ./srcs/

INCLUDE_PATH = ./includes/

RM = rm -f

FUNCTIONS = $(addprefix) $(SRC_PATH), \
		ft_printf.c ft_printf_utils.c ft_printchar.c ft_printstr.c\
	       	ft_printhex.c ft_printheX.c ft_printptr.c ft_itoa.c ft_utoa.c	

OBJS = ft_printf.o ft_printf_utils.o ft_printchar.o ft_printstr.o\
       ft_printhex.o ft_printheX.o ft_printptr.o ft_itoa.o ft_utoa.o

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

$(OBJ): $(FUNCTIONS)
	cc $(FLAGS) -I $(PATH_INCLUDE) -c $(FUNCTIONS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

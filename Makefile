NAME = libftprintf.a

INCLUDE = printf.h

CC = gcc

FLAGS = -Wall -Werror -Wextra

FUNCTIONS = 

OBJS = 

RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

$(OBJ): $(FUNCTIONS)
	$(CC) $(FLAGS) -I $(INCLUDE) -c $(FUNCTIONS)

clean:
	$(RM) $(OBJS) $(BOBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

NAME	= menger

CC	= gcc

RM	= rm -f

SRCS	= ./main.c \
	  ./menger.c

OBJS	= $(SRCS:.c=.o)

CFLAGS = -I./
CFLAGS += -Wall -Wextra -Werror -std=gnu99

all: $(NAME)

$(NAME): $(OBJS)
	 $(CC) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

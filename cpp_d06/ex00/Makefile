NAME	= my_cat

CC	= g++

RM	= rm -f

SRCS	= ./mycat.cpp 

OBJS	= $(SRCS:.cpp=.o)

CPPFLAGS = -I
CPPFLAGS += -W -Wall -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	 $(CC) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

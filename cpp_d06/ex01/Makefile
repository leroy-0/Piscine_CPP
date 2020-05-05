NAME	= my_convert_temp

CC	= g++

RM	= rm -f

SRCS	= ./my_convert_temp.cpp 

OBJS	= $(SRCS:.cpp=.o)

CPPFLAGS = -I
CPPFLAGS += -W -Wall -Wextra -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	 $(CC) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

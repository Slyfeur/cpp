NAME = Float

C++ = c++
C++FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

SRCS =	main.cpp	\
		Fixed.cpp	\

OBJS		=	$(SRCS:%.cpp=%.o)

all:		$(NAME)

$(NAME):	$(OBJS)
			@$(C++) $(C++FLAGS) $(OBJS) -o $(NAME)

.cpp.o:
			@$(CC) $(C++FLAGS) -c $< -o $(<:.cpp=.o)

clean:
			@$(RM) $(OBJS)

fclean:		clean
			@$(RM) $(NAME)

re:			fclean all

.PHONY:		fclean, all, re
NAME = Generator

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -I .
RM = rm -rf

SRCS =	test.cpp	\
		Account.cpp

OBJS		=	$(SRCS:%.cpp=%.o)

all:		$(NAME)

$(NAME):	$(OBJS)
			@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

.cpp.o:
			@$(CC) $(CXXFLAGS) -c $< -o $(<:.cpp=.o)

clean:
			@$(RM) $(OBJS)

fclean:		clean
			@$(RM) $(NAME)

re:			fclean all

.PHONY:		fclean, all, re
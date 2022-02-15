NAME = megaphone

CC = clang++
CPPFLAGS = -Wall -Wextra -Werror
RM = rm -rf

SRCS = megaphone.cpp

all:	$(NAME)

$(NAME):	$(SRCS)
			$(CC) $(CPPFLAGS) $(SRCS) -o $(NAME)

fclean:
			$(RM) $(NAME)

re:			fclean all

.PHONY:		fclean, all, re
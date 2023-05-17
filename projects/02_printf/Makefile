NAME =	libftprintf.a

SRCS =	ft_printf.c\
				ft_putchar.c\
				ft_putstr.c

OBJS =	$(SRCS:.c=.o)

LIBC	= ar rcs

CC		= cc
CFLAGS	= -Wall -Wextra -Werror

RM		= rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(LIBC) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean
	$(NAME)
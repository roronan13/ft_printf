NAME	=	libftprintf.a

SRCS	=	ft_printf.c\
			ft_printf_c.c\
			ft_printf_s.c\
			ft_printf_p.c\
			ft_printf_d.c\
			ft_printf_i.c\
			ft_printf_u.c\
			ft_printf_x.c\
			ft_printf_X.c\
			ft_printf_%.c\
			ft_itoa.c\
			ft_putnbr.c\
			ft_strlen.c

OBJS	=	$(SRCS:.c=.o)

CC		=	cc

CFLAGS	=	-Wall -Wextra -Werror

RM		=	rm -rf

CLEAN	=	clean

all		:	$(NAME)

$(NAME)	:	$(OBJS)
			$(AR) rcs $@ $^

clean	:		
			$(RM) $(OBJS)

fclean	:	clean
			$(RM) $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re
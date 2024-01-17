NAME	=	libftprintf.a

SRCS	=	ft_printf.c\
			ft_printf_c.c\
			ft_printf_s.c\
			ft_printf_p.c\
			ft_printf_d_i.c\
			ft_printf_x.c\
			ft_printf_X.c\
			side_functions/ft_itoa.c\
			side_functions/ft_putnbr.c\
			side_functions/ft_strlen.c\
			side_functions/ft_strlcpy.c\
			side_functions/ft_putnbr_hexa.c

OBJS	=	$(SRCS:.c=.o)

CC		=	cc

INCLUDES_PATH	=	includes

CFLAGS	=	-Wall -Wextra -Werror -I$(INCLUDES_PATH)

RM		=	rm -rf

all		:	$(NAME)

$(NAME)	:	$(OBJS)
			$(AR) rcs $@ $^

clean	:		
			$(RM) $(OBJS)

fclean	:	clean
			$(RM) $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re
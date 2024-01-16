NAME	=	libftprintf.a

SRCS	=	ft_printf.c\
			ft_printf_c.c\
			ft_printf_s.c\
			ft_printf_p.c\
			ft_printf_d.c

SRCS_SIDE	=	ft_itoa.c\
				ft_putnbr.c\
				ft_strlen.c\
				ft_strlcpy.c

SIDE_PATH	=	side_functions

SRCS_SIDE	:= 	$(addprefix $(SIDE_PATH)/, $(SRCS_SIDE))

SRCS		+=	$(SRCS_SIDE)

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
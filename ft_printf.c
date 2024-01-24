/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpothier <rpothier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 00:16:30 by rpothier          #+#    #+#             */
/*   Updated: 2024/01/24 13:50:08 by rpothier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_sign(char a, va_list ap)
{
	int	local_nbr;

	local_nbr = 0;
	if (a == 'c')
		local_nbr = ft_printf_c(va_arg(ap, int));
	if (a == 's')
		local_nbr = ft_printf_s(va_arg(ap, char *));
	if (a == 'p')
		local_nbr = ft_printf_p(va_arg(ap, void *));
	if (a == 'd' || a == 'i')
		local_nbr = ft_printf_d_i(va_arg(ap, int));
	if (a == 'u')
		local_nbr = ft_printf_u(va_arg(ap, unsigned int));
	if (a == 'x')
		local_nbr = ft_printf_x_low(va_arg(ap, unsigned int));
	if (a == 'X')
		local_nbr = ft_printf_x_up(va_arg(ap, unsigned int));
	if (a == '%')
		local_nbr = ft_printf_percent();
	return (local_nbr);
}

int	ft_printf(const char *format, ...)
{
	unsigned int	i;
	char			a;
	int				global_nbr;
	va_list			ap;

	va_start(ap, format);
	i = 0;
	global_nbr = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			a = format[i + 1];
			global_nbr += ft_sign(a, ap);
			i++;
		}
		else
		{
			write(1, &format[i], 1);
			global_nbr++;
		}
		i++;
	}
	va_end(ap);
	return (global_nbr);
}

//int	main(void)
//{
/*	char	c;
	int		a;
	int		b;
	int		d;
	int		y;
	char	*s;
	void	*p;
	int 	x; */
	
	//ptr = malloc(sizeof(int) * 100);
	//d = 155555;
	/*c = 122; //z
	a = printf("printf: %d\n", printf("oui %c\n", c)); //checker longueur vraie printf
	b = printf("ronanf: %d\n", ft_printf("non %c\n", c)); //checker longueur ft_printf
	ft_printf("petit test %c\n", c);
	printf("petit test %c\n", c);
	printf("len printf: %d\nlen ronan %d\n", a, b);*/
	/* x = printf("%i\n", d);
	y = ft_printf("%i\n", d);
	printf("%i\n", d);
	ft_printf("%i\n", d);
	printf("%i\n", x);
	printf("%i\n", y); */
	//s = "\x09";
	/* s = "Allez";
	x = printf("i/ Eh-%s-allez\n", s);
	y = ft_printf("l/ Eh-%s-allez\n", s);
	printf("%s\n", s);
	ft_printf("roro %s\n", s);
	printf("%d\n", x);
	printf("riri %d\n", y); */
	/* printf("vraie : %p\n", p);
	ft_printf("moi : %p\n", p); */
	/*x = 1000;
	printf("vraie 1 : %X\n", x);
	ft_printf("moi 1 : %X\n", x);
	printf("%d\n", printf("vraie : %X\n", x));
	printf("%d\n", ft_printf("moi : %X\n", x));*/
/* 	printf("vraie 1 : %d\n", -50);
	ft_printf("moi 1 : %d\n", -50);
	printf("%d\n", printf("vraie : %d\n", -50));
	printf("%d\n", ft_printf("moi : %d\n", -50));
	return (0);*/
/* 	char	*ptr;
	int a;
	int b;
	
	a = printf("%d\n", -1);
	b = ft_printf("%d\n", -1);
	printf("%d\n", a);
	printf("%d\n", b); */
	
	/* int	a;
	int b;
	a = printf("Hi %s ca va, %d \n", "salut", 13);
	b = ft_printf("Hi %s ca va, %d \n", "salut", 13);
	printf("%d\n", a);
	printf("%d\n", b); */
//}
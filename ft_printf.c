/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpothier <rpothier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 00:16:30 by rpothier          #+#    #+#             */
/*   Updated: 2024/01/12 18:38:02 by rpothier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "stdio.h"
//#include "stdlib.h"

/* int	parcourir la chaine(va_list, const char*)
{
	while (chaine de caractere)
		if (pourcent+ apres cest un% s, d, i..)
			on va dans la fonction qui gere chaque pourcent
		else
			on ecrit
	return(nombre de caratceres imprimes)
} */

/* int	ft_printf(const char *format, ...)
{
	va_list arguments
	int nbr
	va_start()
	nbr = parcourir la chaine
	va_end
	return nbr
	
} */

/* static void	ft_check_sign(char a, int *nbr, int *i, va_list ap)
{
	if (a == 'c' || a == 's' || a == 'p' || a == 'd' || a == 'i'
		|| a == 'u' || a == 'x' || a == 'X' || a == '%')
	{
		nbr = ft_sign(a, nbr, ap);
		i++;
	}
	return ;
} */

static int	ft_sign(char a, va_list ap)
{
	int	nbr;

	if (a == 'c')
		nbr +=(ft_printf_c(va_arg(ap, int)));
	/* if (a == 's')
		nbr += ft_printf_s(va_arg(ap, *char));
	if (a == 'p')
		nbr += ft_printf_p(va_arg(ap, *void)); */
	/* if (a == 'd')
		nbr += ft_printf_d(va_arg(ap, int)); */
	/* if (a == 'i')
		nbr += ft_printf_i(va_arg(ap, int));
	if (a == 'u')
		nbr += ft_printf_u(va_arg(ap, unsigned int)); */
	//return (nbr);
}

int	ft_printf(const char *format, ...)
{
	unsigned int	i;
	char			a;
	int				nbr;
	va_list			ap;

	va_start(ap, format);
	i = 0;
	nbr = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			a = format[i + 1];
			nbr += ft_sign(a, ap);
			i++;
		}
		else
		{
			write(1, &format[i], 1);
			nbr++;
		}
		i++;
	}
	va_end(ap);
	return (nbr);
}

int	main(void)
{
	char	c;
	int		a;
	int		b;
	
	//ptr = malloc(sizeof(int) * 100);
	c = 122; //z
	a = printf("printf: %d\n", printf("oui %c\n\t", c)); //checker longueur vraie printf
	b = printf("ronanf: %d\n", ft_printf("non %c\n\t", c)); //checker longueur ft_printf
	ft_printf("petit test %c\n", c);
	printf("petit test %c\n", c);
	printf("len printf: %d\nlen ronan %d\n", a, b);
	return (0);
}
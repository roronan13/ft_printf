/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpothier <rpothier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 00:16:30 by rpothier          #+#    #+#             */
/*   Updated: 2024/01/11 19:01:07 by rpothier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "stdio.h"

/* int	parcourir la chaine(va_list, const char*)
{
	while (chaine de caractere)
		if (pourcent+ apres cest un% s, d, i..)
			on va dans la fonction qui gere chaque pourcent
		else
			on ecrit
	return(nombre de caratceres imprimes)
} */

/* int	ft_printf(const char *object, ...)
{
	va_list arguments
	int nbr
	va_start()
	nbr = parcourir la chaine
	va_end
	return nbr
	
} */

static void	ft_check_sign(char a, unsigned int *nbr, int *i, va_list ap)
{
	//unsigned int	nbr;
	
	if (a == 'c' || a == 's' || a == 'p' || a == 'd' || a == 'i'
		|| a == 'u' || a == 'x' || a == 'X' || a == '%')
		{
			nbr = ft_sign(a, nbr, ap);
			i++;
		}
}

static int	ft_sign(char a, unsigned int nbr, va_list ap)
{
	if (a == 'c')
		nbr += ft_printf_c(va_arg(ap, char));
	if (a == 's')
		nbr += ft_printf_s(va_arg(ap, *char));
	if (a == 'p')
		nbr += ft_printf_p(va_arg(ap, *void));
	if (a == 'd')
		nbr += ft_printf_d(va_arg(ap, int));
	if (a == 'i')
		nbr += ft_printf_i(va_arg(ap, int));
	t
	return (nbr);
}

int	ft_printf(const char *object, ...)
{
	unsigned int	i;
	char			a;
	unsigned int	nbr;

	va_list(ap);
	va_start(ap, object);
	i = 0;
	nbr = 0;
	while (object[i])
	{
		if (object[i] == '%')
		{
			a = object[i + 1];
			ft_check_sign(a, &nbr, &i, ap);
		}
		else
		{
			write(1, &object[i], 1);
			nbr++;
		}
		i++;
	}
	va_end(ap);
	return (nbr);
}

int	main(void)
{
	printf("%c\n%d\na\n%c\n", 'a', 1, 'b');
	return (0);
}

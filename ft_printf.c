/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpothier <rpothier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 00:16:30 by rpothier          #+#    #+#             */
/*   Updated: 2024/01/05 16:40:02 by rpothier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "stdio.h"

/* int cestquelpourcentbebe()
{
	cest un c?
		appel la fonction qui gere c
} */

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

/* static	ft_sign(object, a)
{
	if (a == 'c')
	{
		
	}
} */

int	ft_printf(const char *object, ...)
{
	unsigned int	i;
	char			a;

	i = 0;
	while (object[i])
	{
		if (object[i] == '%')
		{
			a = object[i + 1];
			if (a == 'c' || a == 's' || a == 'p' || a == 'd' || a == 'i'
				|| a == 'u' || a == 'x' || a == 'X' || a == '%')
			{
				ft_sign(object, a);
			}
		}
		i++;
	}
}

int	main(void)
{
	printf("%c\n%d\n%c\n", 'a', 1, 'b');
	return (0);
}

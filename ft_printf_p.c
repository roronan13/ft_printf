/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpothier <rpothier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 11:47:12 by rpothier          #+#    #+#             */
/*   Updated: 2024/01/19 13:35:35 by rpothier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_p(void *ptr)
{
	unsigned long int	n;
	char				*base_hexa;
	int					nbr;

	if (!ptr)
		return (-1);
	n = (unsigned long int)ptr;
	base_hexa = "0123456789abcdef";
	write(1, "0x", 2);
	nbr = ft_putnbr_hexa(n, base_hexa);
	return (nbr + 2);
}

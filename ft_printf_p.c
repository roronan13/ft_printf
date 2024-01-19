/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpothier <rpothier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 11:47:12 by rpothier          #+#    #+#             */
/*   Updated: 2024/01/19 12:03:28 by rpothier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_p(void *ptr)
{
	unsigned int	n;
	char			*base_hexa;
	int				nbr;

	n = (unsigned int)ptr;
	base_hexa = "0123456789abcdef";
	write(1, "0x", 2);
	nbr = ft_putnbr_hexa(n, base_hexa);
	return (nbr + 2);
}

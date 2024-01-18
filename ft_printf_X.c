/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_X.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpothier <rpothier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 21:05:51 by rpothier          #+#    #+#             */
/*   Updated: 2024/01/18 21:29:57 by rpothier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int	ft_printf_X(unsigned int n)
{
	int		nbr;
	char	*base_up_hexa;

	base_up_hexa = "0123456789ABCDEF";
	nbr = ft_putnbr_hexa(n, base_up_hexa);
	return (nbr);
}

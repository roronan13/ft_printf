/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpothier <rpothier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:19:29 by rpothier          #+#    #+#             */
/*   Updated: 2024/01/17 20:30:57 by rpothier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int	ft_printf_x(int n)
{
	int		nbr;
	char	*base_hexa;

	base_hexa = "0123456789abcdef";
	nbr = ft_putnbr_hexa(n, base_hexa);
	return (nbr);
}
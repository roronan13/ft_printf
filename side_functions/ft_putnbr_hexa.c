/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpothier <rpothier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 16:34:09 by rpothier          #+#    #+#             */
/*   Updated: 2024/01/19 11:35:36 by rpothier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include <unistd.h>
#include <stdio.h>

int	ft_putnbr_hexa(unsigned int n, char *base)
{
	int	i;

	i = 0;
	if (n <= 15)
	{
		write(1, &base[n], 1);
		i = 1;
	}
	else
	{
		i += ft_putnbr_hexa(n / 16, base);
		i += ft_putnbr_hexa(n % 16, base);
	}
	return (i);
}

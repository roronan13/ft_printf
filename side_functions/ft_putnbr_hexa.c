/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpothier <rpothier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 16:34:09 by rpothier          #+#    #+#             */
/*   Updated: 2024/01/17 18:19:11 by rpothier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_putnbr_hexa(int n, char *base)
{
	int	i;

	i = 0;
	if (n == -2147483648)
	{
		write(1, "-80000000", 9);
		return (9);
	}
	else if (n < 0)
	{
		n *= -1;
		write(1, '-', 1);
	}
	if (n <= 15)
	{
		write(1, &base[n], 1);
		i++;
	}
	else
	{
		ft_putnbr_base(n / 16, base);
		ft_putnbr_base(n % 16, base);
	}
	return (i);
}

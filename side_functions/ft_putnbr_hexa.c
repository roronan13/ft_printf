/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpothier <rpothier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 16:34:09 by rpothier          #+#    #+#             */
/*   Updated: 2024/01/17 19:00:47 by rpothier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include <unistd.h>

int	ft_putnbr_hexa(int n, char *base, int i)
{
	if (n == -2147483648)
	{
		write(1, "-80000000", 9);
		return (9);
	}
	else if (n < 0)
	{
		n *= -1;
		write(1, '-', 1);
		i++;
	}
	if (n <= 15)
	{
		write(1, &base[n], 1);
		i++;
	}
	else
	{
		i += ft_putnbr_hexa(n / 16, base, i);
		i += ft_putnbr_hexa(n % 16, base, i);
	}
	return (i);
}

int	main()
{
	ft_putnbr_hexa(300, "0123456789abcdef", 0);
}
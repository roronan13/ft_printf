/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpothier <rpothier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 16:34:09 by rpothier          #+#    #+#             */
/*   Updated: 2024/01/17 17:45:26 by rpothier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_putnbr_base(int n, char *base)
{
	int	size_base;

	size_base = ft_strlen(base);
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
	if ()
}

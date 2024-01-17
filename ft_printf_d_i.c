/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpothier <rpothier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 23:24:56 by rpothier          #+#    #+#             */
/*   Updated: 2024/01/17 11:50:39 by rpothier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int	ft_printf_d_i(int n)
{
	char	*nbr_size;
	
	nbr_size = ft_itoa(n);
	ft_putnbr(n);
	n = ft_strlen(nbr_size);
	free(nbr_size);
	return (n);
}
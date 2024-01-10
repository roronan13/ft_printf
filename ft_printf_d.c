/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpothier <rpothier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 23:24:56 by rpothier          #+#    #+#             */
/*   Updated: 2024/01/10 23:58:49 by rpothier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_d(int n)
{
	char	*nbr_size;
	
	nbr_size = ft_itoa(n);
	ft_putnbr(n);
	return (ft_strlen(nbr_size));
}

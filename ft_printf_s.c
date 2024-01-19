/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpothier <rpothier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 23:02:37 by rpothier          #+#    #+#             */
/*   Updated: 2024/01/19 14:14:36 by rpothier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_s(char *s)
{
	long unsigned int	i;

	i = 0;
	while (s[i])
		write(1, &s[i++], 1);
	return (ft_strlen(s));
}

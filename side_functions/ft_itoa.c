/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpothier <rpothier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 23:52:57 by rpothier          #+#    #+#             */
/*   Updated: 2024/01/16 18:57:30 by rpothier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_size(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (2);
	if (n < 0)
		i = 1;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i + 1);
}

static void	ft_putnbr_itoa(char *ptr, int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n *= -1;
		ptr[i] = '-';
		i++;
	}
	if (n < 10)
	{
		while ((ptr[i] >= '0' && ptr[i] <= '9') || ptr[i] == '-')
			i++;
		ptr[i] = n + 48;
	}
	else
	{
		ft_putnbr_itoa(ptr, n / 10);
		ft_putnbr_itoa(ptr, n % 10);
	}
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		size;

	size = ft_size(n);
	ptr = (char *)malloc(sizeof(char) * size);
	if (!ptr)
		return (NULL);
	if (n == -2147483648)
	{
		ft_strlcpy(ptr, "-2147483648", 12);
		return (ptr);
	}
	ft_putnbr_itoa(ptr, n);
	ptr[size - 1] = '\0';
	return (ptr);
}

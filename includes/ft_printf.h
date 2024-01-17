/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpothier <rpothier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 18:58:56 by rpothier          #+#    #+#             */
/*   Updated: 2024/01/17 21:07:19 by rpothier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdint.h>
# include <stdlib.h>
# include <stdio.h>

//typedef intptr_t;

int		ft_printf(const char *object, ...);
int		ft_printf_c(int c);
int		ft_printf_s(char *s);
int		ft_printf_p(void *ptr);
int		ft_printf_d_i(int n);
int		ft_printf_x(int n);
int		ft_printf_X(int n);
int		ft_strlen(const char *s);
void	ft_putnbr(int n);
char	*ft_itoa(int n);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
int		ft_putnbr_hexa(int n, char *base_hexa);

#endif
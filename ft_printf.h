/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpothier <rpothier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 18:58:56 by rpothier          #+#    #+#             */
/*   Updated: 2024/01/16 16:29:45 by rpothier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdint.h>

//typedef intptr_t;

int		ft_printf(const char *object, ...);
int		ft_printf_c(int c);
int		ft_printf_d(int n);
int		ft_printf_p(void *ptr);
int		ft_printf_s(char *s);
int		ft_strlen(const char *s);
void	ft_putnbr(int n);
char	*ft_itoa(int n);

#endif
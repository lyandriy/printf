/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyandriy <lyandriy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 16:47:03 by lyandriy          #+#    #+#             */
/*   Updated: 2022/12/17 19:21:01 by lyandriy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int		ft_printf(char const *s1, ...);
int		ft_variable_type(va_list arg, char const s1);
int		ft_print_c(char arg);
int		ft_print_s(char *arg);
int		ft_print_p(void *arg);
int		ft_print_d_i(int arg);
int		ft_print_u(unsigned int arg);
int		ft_print_x(unsigned int arg);
int		ft_print_upper_x(unsigned int arg);
int		ft_putnbr(unsigned int arg);
int		ft_puthex(size_t arg, char *str);
void	ft_putchar(char str);

#endif
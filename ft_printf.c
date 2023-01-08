/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyandriy <lyandriy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 16:43:05 by lyandriy          #+#    #+#             */
/*   Updated: 2022/12/17 20:41:36 by lyandriy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_variable_type(va_list arg, char const s1)
{
	int	count_write;

	if (s1 == 'c')
		count_write = ft_print_c(va_arg(arg, int));
	else if (s1 == 's')
		count_write = ft_print_s(va_arg(arg, char *));
	else if (s1 == 'p')
		count_write = ft_print_p(va_arg(arg, void *));
	else if (s1 == 'd' || s1 == 'i')
		count_write = ft_print_d_i(va_arg(arg, int));
	else if (s1 == 'u')
		count_write = ft_print_u(va_arg(arg, int));
	else if (s1 == 'x')
		count_write = ft_print_x(va_arg(arg, int));
	else if (s1 == 'X')
		count_write = ft_print_upper_x(va_arg(arg, int));
	else if (s1 == '%')
		count_write = write(1, "%", 1);
	else
		count_write = write(1, &s1, 1);
	return (count_write);
}

int	ft_printf(char const *s1, ...)
{
	int		i;
	int		count_write;
	va_list	arg;

	i = 0;
	count_write = 0;
	va_start (arg, s1);
	while (s1[i] != '\0')
	{
		if (s1[i] == '%')
		{
			i++;
			count_write += ft_variable_type(arg, s1[i]);
		}
		else
		{
			write (1, &s1[i], 1);
			count_write++;
		}
		i++;
	}
	va_end(arg);
	return (count_write);
}

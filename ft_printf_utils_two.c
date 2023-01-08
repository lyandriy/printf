/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   additional_functions.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyandriy <lyandriy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 16:45:08 by lyandriy          #+#    #+#             */
/*   Updated: 2022/12/17 19:19:31 by lyandriy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char str)
{
	write(1, &str, 1);
}

int	ft_putnbr(unsigned int arg)
{
	unsigned int	j;
	int				count_write;

	count_write = 1;
	j = arg;
	if (j > 9)
		count_write += ft_putnbr(j / 10);
	j = (j % 10) + 48;
	write(1, &j, 1);
	return (count_write);
}

int	ft_puthex(size_t arg, char *str)
{
	int	count_write;

	count_write = 1;
	if (arg >= 16)
		count_write += ft_puthex(arg / 16, str);
	ft_putchar(str[arg % 16]);
	return (count_write);
}

int	ft_print_x(unsigned int arg)
{
	int	count_write;

	count_write = 0;
	count_write += ft_puthex(arg, "0123456789abcdef");
	return (count_write);
}

int	ft_print_upper_x(unsigned int arg)
{
	int	count_write;

	count_write = 0;
	count_write += ft_puthex(arg, "0123456789ABCDEF");
	return (count_write);
}

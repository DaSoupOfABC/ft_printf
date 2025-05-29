/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jenlee <jenlee@student.42kl.edu.my         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 18:50:58 by jenlee            #+#    #+#             */
/*   Updated: 2025/05/29 16:45:53 by jenlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../ft_printf.h"

int	hex_len(unsigned int num)
{
	int	i;

	i = 0;
	while (num != 0)
	{
		i++;
		num /= 16;
	}
	return (i);
}

void	ft_hex(unsigned int num, const char x_X)
{
	if (num >= 16)
	{
		ft_hex(num / 16, x_X);
		ft_hex(num % 16, x_X);
	}
	else
	{
		if (num < 10)
			ft_putchar(num + '0');
		else
		{
			if (x_X == 'x')
				ft_putchar(num - 10 + 'a');
			if (x_X == 'X')
				ft_putchar(num - 10 + 'A');
		}
	}
}

int	ft_print_x(unsigned int num, const char x_X)
{
	if (num == 0)
		return (ft_putchar('0'));
	else
	{
		ft_hex(num, x_X);
		return (hex_len(num));
	}
}

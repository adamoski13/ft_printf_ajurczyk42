/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_printf.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajurczyk <ajurczyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 14:29:02 by ajurczyk          #+#    #+#             */
/*   Updated: 2025/03/10 18:58:27 by ajurczyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_printf(int num, size_t *n)
{
	if (num == -2147483648)
	{
		ft_putnbr_printf((num / 10), n);
		ft_putchar_printf('8', n);
	}
	else if (num < 0)
	{
		ft_putchar_printf('-', n);
		ft_putnbr_printf(-num, n);
	}
	else
	{
		if (num > 9)
			ft_putnbr_printf((num / 10), n);
		ft_putchar_printf(('0' + num % 10), n);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_printf.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajurczyk <ajurczyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 14:26:33 by ajurczyk          #+#    #+#             */
/*   Updated: 2025/03/10 18:58:28 by ajurczyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr_printf(char *str, size_t *n)
{
	if (!str)
		str = "(null)";
	while (*str)
	{
		ft_putchar_printf(*str, n);
		str++;
	}
}

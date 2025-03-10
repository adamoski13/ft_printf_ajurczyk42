/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_printf.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajurczyk <ajurczyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 15:50:44 by ajurczyk          #+#    #+#             */
/*   Updated: 2025/03/10 18:58:27 by ajurczyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex_printf(unsigned int num, size_t *n, char *range)
{
	char	*str;

	str = ft_additional_printf(num, range);
	ft_putstr_printf(str, n);
	free(str);
}

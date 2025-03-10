/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putudec_printf.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajurczyk <ajurczyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 15:52:19 by ajurczyk          #+#    #+#             */
/*   Updated: 2025/03/10 19:20:56 by ajurczyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putudec_printf(unsigned int num, size_t *n, char *range)
{
	char	*str;

	str = ft_additional_printf(num, range);
	ft_putstr_printf(str, n);
	free(str);
}

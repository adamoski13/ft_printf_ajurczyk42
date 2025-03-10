/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_printf.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajurczyk <ajurczyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 15:47:30 by ajurczyk          #+#    #+#             */
/*   Updated: 2025/03/10 19:31:11 by ajurczyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putptr_printf(void *ptr, size_t *n, char *range)
{
	char			*str;
	unsigned long	ptr_adr;

	if (ptr == 0)
	{
		write(1, "(nil)", 5);
		*n += 5;
		return ;
	}
	ptr_adr = (unsigned long)ptr;
	ft_putstr_printf("0x", n);
	str = ft_additional_printf(ptr_adr, range);
	ft_putstr_printf(str, n);
	free(str);
}

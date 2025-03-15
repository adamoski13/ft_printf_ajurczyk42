/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajurczyk <ajurczyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 14:02:32 by ajurczyk          #+#    #+#             */
/*   Updated: 2025/03/10 19:32:54 by ajurczyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
//#include <stdio.h>

void	ft_checkformat(va_list va, char *str, size_t *n)
{
	if (*str == 'c')
		ft_putchar_printf(va_arg(va, int), n);
	else if (*str == 's')
		ft_putstr_printf(va_arg(va, char *), n);
	else if (*str == 'p')
		ft_putptr_printf(va_arg(va, void *), n, "0123456789abcdef");
	else if (*str == 'i' || *str == 'd')
		ft_putnbr_printf(va_arg(va, int), n);
	else if (*str == 'u')
		ft_putudec_printf(va_arg(va, unsigned int), n, "0123456789");
	else if (*str == 'x')
		ft_puthex_printf(va_arg(va, unsigned int), n, "0123456789abcdef");
	else if (*str == 'X')
		ft_puthex_printf(va_arg(va, unsigned int), n, "0123456789ABCDEF");
	else if (*str == '%')
		ft_putchar_printf(*str, n);
}

int	ft_printf(const char *str, ...)
{
	va_list	va;
	size_t	n;

	if (!str)
		return (0);
	n = 0;
	va_start(va, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			ft_checkformat(va, (char *)str, &n);
		}
		else
			ft_putchar_printf(*str, &n);
		str++;
	}
	va_end(va);
	return (n);
}

// int	main(void)
// {
// 	int i = 255;
// 	void *p = &i;
// 	char c = 'a';
// 	char *s = "42 Warsaw";

// 	ft_printf("My function -> Print character: %c\n",c);
// 	printf("Oryginal function -> Print character: %c\n",c);
// 	ft_printf("My function -> Print string: %s\n",s);
// 	printf("Oryginal function -> Print string: %s\n",s);
// 	ft_printf("My function -> Print pointer: %p\n", p);
// 	printf("Oryginal function -> Print pointer: %p\n", p);
// 	ft_printf("My function -> Print number: %i\n",i);
// 	printf("Oryginal function -> Print number: %i\n",i);
// 	ft_printf("My function -> Print number: %d\n",i);
// 	printf("Oryginal function -> Print number: %d\n",i);
// 	ft_printf("My function -> Print number: %u\n",i);
// 	printf("Oryginal function -> Print number: %u\n",i);
// 	ft_printf("My function -> 255 in hexadecimal = %x\n",i);
// 	printf("Oryginal function -> 255 in hexadecimal = %x\n",i);
// 	ft_printf("My function -> 255 in HEXADECIMAL = %X\n",i);
// 	printf("Oryginal function -> 255 in HEXADECIMAL = %X\n",i);
// 	ft_printf("My function -> Print fraction symbol: %%\n");
// 	printf("Oryginal function -> Print fraction symbol: %%\n");

// 	return 0;
// }

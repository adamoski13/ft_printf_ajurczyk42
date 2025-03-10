/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajurczyk <ajurczyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 14:00:58 by ajurczyk          #+#    #+#             */
/*   Updated: 2025/03/10 19:24:04 by ajurczyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

int		ft_printf(const char *str, ...);
void	ft_putchar_printf(char c, size_t *n);
void	ft_puthex_printf(unsigned int num, size_t *n, char *range);
void	ft_putnbr_printf(int num, size_t *n);
void	ft_putptr_printf(void *ptr, size_t *n, char *range);
void	ft_putstr_printf(char *str, size_t *n);
void	ft_putudec_printf(unsigned int num, size_t *n, char *range);
char	*ft_additional_printf(unsigned long long n, char *range);

#endif
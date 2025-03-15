/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_additional_printf.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajurczyk <ajurczyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 14:50:28 by ajurczyk          #+#    #+#             */
/*   Updated: 2025/03/10 18:58:24 by ajurczyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n > 0)
	{
		*ptr = 0;
		ptr++;
		n--;
	}
}

void	*ft_calloc(size_t num, size_t size)
{
	void	*dest;

	dest = malloc (num * size);
	if (dest == NULL)
		return (NULL);
	ft_bzero(dest, num * size);
	return (dest);
}

size_t	ft_nlen(unsigned long long n, size_t range_len)
{
	size_t	len;

	len = 1;
	while (n >= range_len)
	{
		n /= range_len;
		len++;
	}
	return (len);
}

size_t	ft_rangelen(const char *str)
{
	size_t	c;

	if (!str)
		return (0);
	c = 0;
	while (str[c])
		c++;
	return (c);
}

char	*ft_additional_printf(unsigned long long n, char *range)
{
	char	*str;
	int		n_len;
	int		range_len;

	range_len = ft_rangelen(range);
	n_len = ft_nlen(n, range_len);
	str = ft_calloc((n_len + 1), sizeof(char));
	if (!str)
		return (NULL);
	while (n_len)
	{
		n_len--;
		str[n_len] = range[n % range_len];
		n /= range_len;
	}
	return (str);
}

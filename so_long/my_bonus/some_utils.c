/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   some_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 23:05:22 by akaabi            #+#    #+#             */
/*   Updated: 2023/03/05 14:10:52 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

static int	ft_count(int n)
{
	int	count;

	count = 0;
	if (n <= 0)
		count++;
	while (n)
	{
		count++;
		n /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char		*s;
	size_t		size_n;
	long		nb;

	size_n = ft_count(n);
	nb = n;
	s = ft_calloc(sizeof(char), size_n + 1);
	while (!s)
		return (0);
	if (nb < 0)
	{
		s[0] = '-';
		nb = -nb;
	}
	if (!nb)
		s[0] = '0';
	while (nb)
	{
		s[--size_n] = (nb % 10) + '0';
		nb /= 10;
	}
	return (s);
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	p = malloc(count * size);
	if (!p)
		return (0);
	ft_bzero(p, (count * size));
	return (p);
}

void	ft_bzero(void *s, size_t n)
{
	size_t		i;
	char		*str;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}

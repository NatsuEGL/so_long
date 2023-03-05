/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 13:04:10 by akaabi            #+#    #+#             */
/*   Updated: 2022/11/15 16:30:22 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int nbr, int *count)
{
	long	n;

	n = nbr;
	if (n < 0)
	{
		ft_putchar('-', count);
		n *= -1;
	}
	if (n >= 0 && n <= 9)
	{
		ft_putchar(n + '0', count);
	}
	else
	{
		ft_putnbr(n / 10, count);
		ft_putnbr(n % 10, count);
	}
}

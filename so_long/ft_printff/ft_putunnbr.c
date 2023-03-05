/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 13:15:53 by akaabi            #+#    #+#             */
/*   Updated: 2022/11/15 15:45:30 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunnbr(unsigned int n, int *count)
{
	unsigned long	nbr;

	nbr = n;
	if (nbr >= 0 && n <= 9)
	{
		ft_putchar(nbr + '0', count);
	}
	else
	{
		ft_putunnbr(nbr / 10, count);
		ft_putunnbr(nbr % 10, count);
	}
}

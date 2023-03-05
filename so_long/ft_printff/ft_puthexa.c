/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 12:46:23 by akaabi            #+#    #+#             */
/*   Updated: 2022/11/15 16:28:05 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthexa(unsigned int nbr, int *count, char c)
{
	if (nbr <= 9)
		ft_putchar(nbr + '0', count);
	else if (nbr > 9 && nbr < 16)
	{
		if (c == 'Z')
			ft_putchar("ABCDEF"[nbr % 10], count);
		else if (c == 'z')
			ft_putchar("abcdef"[nbr % 10], count);
	}
	else
	{
		ft_puthexa(nbr / 16, count, c);
		ft_puthexa(nbr % 16, count, c);
	}
}

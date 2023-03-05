/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 12:45:05 by akaabi            #+#    #+#             */
/*   Updated: 2022/11/15 16:26:29 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putp(unsigned long long n, int *count)
{
	if (n <= 9)
		ft_putchar(n + '0', count);
	else if (n > 9 && n < 16)
		ft_putchar("abcdef"[n % 10], count);
	else
	{
		ft_putp(n / 16, count);
		ft_putp(n % 16, count);
	}
}

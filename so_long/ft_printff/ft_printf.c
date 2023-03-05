/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:29:13 by akaabi            #+#    #+#             */
/*   Updated: 2022/11/16 12:12:52 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put(char s, va_list arg, int *somme)
{
	if (s == 'd' || s == 'i')
		ft_putnbr(va_arg(arg, int), somme);
	else if (s == 's')
		ft_putstr(va_arg(arg, char *), somme);
	else if (s == 'u')
		ft_putunnbr(va_arg(arg, unsigned int), somme);
	else if (s == '%')
		ft_putchar('%', somme);
	else if (s == 'X')
		ft_puthexa(va_arg(arg, unsigned int), somme, 'Z');
	else if (s == 'x')
		ft_puthexa(va_arg(arg, unsigned int), somme, 'z');
	else if (s == 'c')
		ft_putchar(va_arg(arg, int), somme);
	else if (s == 'p')
	{
		ft_putstr("0x", somme);
		ft_putp(va_arg(arg, unsigned long long), somme);
	}
	else
		ft_putchar(s, somme);
}

int	ft_printf(const char *str, ...)
{
	int		somme;
	int		i;
	va_list	arg;

	somme = 0;
	i = 0;
	va_start (arg, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			if (!str[i + 1])
				return (somme);
			ft_put(str[i + 1], arg, &somme);
			i++;
		}
		else
			ft_putchar(str[i], &somme);
		i++;
	}
	va_end(arg);
	return (somme);
}

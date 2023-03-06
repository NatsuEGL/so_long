/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 12:01:37 by akaabi            #+#    #+#             */
/*   Updated: 2023/03/06 15:13:36 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>

void	ft_putchar(char c, int *count);
void	ft_putstr(char *s, int *count);
void	ft_puthexa(unsigned int nbr, int *count, char c);
void	ft_putnbr(int nbr, int *count);
void	ft_putp(unsigned long long n, int *count);
void	ft_putunnbr(unsigned int n, int *count);
int		ft_printf(const char *str, ...);

#endif
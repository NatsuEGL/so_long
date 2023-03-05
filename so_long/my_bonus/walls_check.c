/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   walls_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 13:24:39 by akaabi            #+#    #+#             */
/*   Updated: 2023/03/05 14:11:16 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	first_row(t_needed *s, char *a)
{
	int	i;

	i = 0;
	while (a[i] != '\n')
	{
		if (a[i] != '1')
			return (0);
		i++;
	}
	if (i != s->col)
		return (0);
	return (1);
}

int	middle_row(t_needed *s, char *a)
{
	int	i;

	if (a[0] != '1')
		return (0);
	i = 1;
	while (a[i] != '\n')
	{
		if (!check_characters(a[i]))
			return (0);
		i++;
	}
	if (a[i - 1] != '1' || i != s->col)
		return (0);
	return (1);
}

int	check_characters(char a)
{
	if (a == 'C' || a == 'P' || a == '1' || a == '0' || a == 'E' || a == 'M')
		return (1);
	return (0);
}

int	last_row(t_needed *s, char *a)
{
	int	i;

	i = 0;
	while (a[i] != '\0')
	{
		if (a[i] != '1')
			return (0);
		i++;
	}
	if (i != s->col)
		return (0);
	return (1);
}

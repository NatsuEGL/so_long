/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_characters.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 14:42:55 by akaabi            #+#    #+#             */
/*   Updated: 2023/03/06 21:40:48 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	charcters_needed(t_needed *s)
{
	int	a;
	int	b;

	a = 0;
	while (s->map[a])
	{
		b = 0;
		while (s->map[a][b])
		{
			if (s->map[a][b] == 'P')
			s->player++;
			if (s->map[a][b] == 'E')
			s->exit++;
			if (s->map[a][b] == 'C')
			s->coin++;
			b++;
		}
		a++;
	}
	if (!my_characters(s))
		return (0);
	return (1);
}

int	my_characters(t_needed *s)
{
	if (s->player != 1)
		return (0);
	if (s->exit != 1)
		return (0);
	if (s->coin == 0)
		return (0);
	return (1);
}

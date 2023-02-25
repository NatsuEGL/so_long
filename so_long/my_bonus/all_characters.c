/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_characters.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 14:42:55 by akaabi            #+#    #+#             */
/*   Updated: 2023/02/25 13:38:32 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int charcters_needed(t_needed *s)
{
	int	a;
	int	b;

	a = 0;
	while (s->map[a])
	{
		b = 0;
		while(s->map[a][b])
		{
			if (s->map[a][b] == 'P')
			s->player++;
			if (s->map[a][b] == 'E')
			s->Exit++;
			if (s->map[a][b] == 'C')
			s->Coin++;
			b++;
		}
		a++;
	}
	if (s->player != 1)
		return(0);
	if (s->Exit != 1)
		return(0);
	if (s->Coin == 0)
		return(0);
	return(1);
}

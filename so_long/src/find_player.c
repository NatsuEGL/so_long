/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_player.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 19:12:26 by akaabi            #+#    #+#             */
/*   Updated: 2023/02/24 22:44:21 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void find_player(t_needed *s)
{
	s->px = 0;
	s->py = 0;
	while (s->map[s->py])
	{
		s->px = 0;
		while (s->map[s->py][s->px])
		{
			if (s->map[s->py][s->px] == 'P')
				return ;
			s->px++;
		}
		s->py++;
	}
}

int key_hook(int key,t_needed *s)
{
	find_player(s);
	if (key == 53)
		ft_close(s);
	else 
		move(key,s);
	checking(s);
	return (0);
}

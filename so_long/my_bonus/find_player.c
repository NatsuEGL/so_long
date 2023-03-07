/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_player.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 19:12:26 by akaabi            #+#    #+#             */
/*   Updated: 2023/03/07 17:19:27 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	find_player(t_needed *s)
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

void	find_monster(t_needed *s)
{
	s->my = 0;
	while (s->map[s->my])
	{
		s->mx = 0;
		while (s->map[s->my][s->mx])
		{
			if (s->map[s->my][s->mx] == 'M')
				return ;
			s->mx++;
		}
		s->my++;
	}
}

int	key_hook(int key, t_needed *s)
{
	char	*p;

	find_player(s);
	if (key == 53)
		ft_close(s);
	else
		move(key, s);
	mlx_clear_window(s->mlx, s->window);
	checking(s);
	p = ft_itoa(s->moves);
	mlx_string_put(s->mlx, s->window, s->col * SIZE + 25, 32, 0xFF69B4, p);
	free(p);
	return (0);
}

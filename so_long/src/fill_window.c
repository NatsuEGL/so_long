/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_window.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 18:17:56 by akaabi            #+#    #+#             */
/*   Updated: 2023/03/06 16:50:52 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	checking(t_needed *s)
{
	s->y = 0;
	s->x = 0;
	while (s->map[s->y])
	{
		s->x = 0;
		while (s->map[s->y][s->x])
		{
			if (s->map[s->y][s->x] == '1')
				wall_backgroud(s);
			if (s->map[s->y][s->x] == '0')
				back_ground(s);
			if (s->map[s->y][s->x] == 'P')
				player_one(s);
			if (s->map[s->y][s->x] == 'C')
				coin_collection(s);
			if (s->map[s->y][s->x] == 'E')
				door_exit(s);
			s->x++;
		}
		s->y++;
	}
	return (0);
}

int	window_display(t_needed *s)
{
	s->mlx = mlx_init();
	s->window = mlx_new_window(s->mlx, s->col * SIZE, s->row * SIZE, "so_long");
	checking(s);
	s->moves = 0;
	mlx_hook(s->window, 2, 0, key_hook, s);
	mlx_hook(s->window, 17, 0, ft_close, s);
	mlx_loop(s->mlx);
	return (0);
}

int	ft_close(t_needed *s)
{
	mlx_destroy_window(s->mlx, s->window);
	exit(1);
}

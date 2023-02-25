/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_window.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 18:17:56 by akaabi            #+#    #+#             */
/*   Updated: 2023/02/25 13:38:28 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

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
				Coin_collection(s);
			if (s->map[s->y][s->x] == 'E')
				door_Exit(s);
			s->x++;
		}
		s->y++;
	}
	return (0);
}

int window_display(t_needed *s)
{
	s->mlx = mlx_init();
    s->window = mlx_new_window(s->mlx,s->col * SIZE,s->row * SIZE,"so_long");
	checking(s);
	mlx_hook(s->window, 2, 0, key_hook, s); 
	mlx_hook(s->window, 17, 0, ft_close, s); 
    mlx_loop(s->mlx);
	return (0);
}

int ft_close(t_needed *s)
{
	mlx_destroy_window(s->mlx,s->window);
	exit(1);
}

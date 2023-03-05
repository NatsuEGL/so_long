/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   monster_animation.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 14:12:18 by akaabi            #+#    #+#             */
/*   Updated: 2023/03/05 14:18:51 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	monster(t_needed *s)
{
	// static int	a;

	// if (a == 1)
	// {
		s->m = mlx_xpm_file_to_image(s->mlx, "my_images/monster.xpm", \
		&s->weight, &s->hight);
		mlx_put_image_to_window(s->mlx, s->window, s->m, \
		s->x * SIZE, s->y * SIZE);
		mlx_destroy_image(s->mlx, s->m);
	// }
	// else if (a == 2)
	// {
	// 	s->m2 = mlx_xpm_file_to_image(s->mlx, "my_images/gif/monster2.xpm", \
	// 	&s->weight, &s->hight);
	// 	mlx_put_image_to_window(s->mlx, s->window, s->m2, \
	// 	s->x * SIZE, s->y * SIZE);
	// 	mlx_destroy_image(s->mlx, s->m2);
	// }
	// else if (a == 3)
	// {
	// 	s->m3 = mlx_xpm_file_to_image(s->mlx, "my_images/gif/monster3.xpm", \
	// 	&s->weight, &s->hight);
	// 	mlx_put_image_to_window(s->mlx, s->window, s->m3, \
	// 	s->x * SIZE, s->y * SIZE);
	// 	mlx_destroy_image(s->mlx, s->m3);
	// }
	// else if (a == 4)
	// {
	// 	s->m4 = mlx_xpm_file_to_image(s->mlx, "my_images/gif/monster4.xpm", \
	// 	&s->weight, &s->hight);
	// 	mlx_put_image_to_window(s->mlx, s->window, s->m4, \
	// 	s->x * SIZE, s->y * SIZE);
	// 	mlx_destroy_image(s->mlx, s->m4);
	// }
	// else if (a == 5)
	// {
	// 	s->m5 = mlx_xpm_file_to_image(s->mlx, "my_images/gif/monster5.xpm", \
	// 	&s->weight, &s->hight);
	// 	mlx_put_image_to_window(s->mlx, s->window, s->m5, \
	// 	s->x * SIZE, s->y * SIZE);
	// 	mlx_destroy_image(s->mlx, s->m5);
	// }
	// else if (a == 6)
	// {
	// 	s->m6 = mlx_xpm_file_to_image(s->mlx, "my_images/gif/monster6.xpm", \
	// 	&s->weight, &s->hight);
	// 	mlx_put_image_to_window(s->mlx, s->window, s->m6, \
	// 	s->x * SIZE, s->y * SIZE);
	// 	mlx_destroy_image(s->mlx, s->m6);
	// }
	// else if (a == 7)
	// {
	// 	s->m7 = mlx_xpm_file_to_image(s->mlx, "my_images/gif/monster7.xpm", \
	// 	&s->weight, &s->hight);
	// 	mlx_put_image_to_window(s->mlx, s->window, s->m7, \
	// 	s->x * SIZE, s->y * SIZE);
	// 	mlx_destroy_image(s->mlx, s->m7);
	// }
	// else if (a == 8)
	// {
	// 	s->m8 = mlx_xpm_file_to_image(s->mlx, "my_images/gif/monster8.xpm", \
	// 	&s->weight, &s->hight);
	// 	mlx_put_image_to_window(s->mlx, s->window, s->m8, \
	// 	s->x * SIZE, s->y * SIZE);
	// 	mlx_destroy_image(s->mlx, s->m8);
	// }
	// else if (a == 9)
	// 	a = 0;
	// a++;
	return (0);
}

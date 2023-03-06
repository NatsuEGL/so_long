/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   monster_animation.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 14:12:18 by akaabi            #+#    #+#             */
/*   Updated: 2023/03/06 13:57:39 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	monster(t_needed *s)
{
	s->m = mlx_xpm_file_to_image(s->mlx, "my_images/monster.xpm", \
	&s->weight, &s->hight);
	mlx_put_image_to_window(s->mlx, s->window, s->m, \
	s->x * SIZE, s->y * SIZE);
	mlx_destroy_image(s->mlx, s->m);
	return (0);
}

int	playerl_one(t_needed *s)
{
	s->p = mlx_xpm_file_to_image(s->mlx, "my_images/playerl.xpm", \
	&s->weight, &s->hight);
	if (!s->p)
	{
		ft_printf("Error\nSomething Goes Wrong!!, Try Again\n");
		exit(1);
	}
	mlx_put_image_to_window(s->mlx, s->window, s->p, \
	s->x * SIZE, s->y * SIZE);
	mlx_destroy_image(s->mlx, s->p);
	return (0);
}

int	door_exit2(t_needed *s)
{
	s->e = mlx_xpm_file_to_image(s->mlx, "my_images/opendoor.xpm", \
	&s->weight, &s->hight);
	if (!s->c)
	{
		ft_printf("Error\nSomething Goes Wrong!!, Try Again\n");
		exit(1);
	}
	mlx_put_image_to_window(s->mlx, s->window, s->e, \
	s->x * SIZE, s->y * SIZE);
	mlx_destroy_image(s->mlx, s->e);
	return (0);
}

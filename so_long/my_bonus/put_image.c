/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_image.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 13:53:05 by akaabi            #+#    #+#             */
/*   Updated: 2023/03/06 13:59:12 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	player_one(t_needed *s)
{
	if (s->playerp == 1)
	{
		s->p = mlx_xpm_file_to_image(s->mlx, "my_images/player.xpm", \
		&s->weight, &s->hight);
		if (!s->p)
		{
			ft_printf("Error\nSomething Goes Wrong!!, Try Again\n");
			exit(1);
		}
		mlx_put_image_to_window(s->mlx, s->window, s->p, \
		s->x * SIZE, s->y * SIZE);
		mlx_destroy_image(s->mlx, s->p);
	}
	else
		playerl_one(s);
	return (0);
}

int	back_ground(t_needed *s)
{	
	s->b = mlx_xpm_file_to_image(s->mlx, "my_images/background.xpm", \
	&s->weight, &s->hight);
	if (!s->b)
	{
		ft_printf("Error\nSomething Goes Wrong!!, Try Again\n");
		exit(1);
	}
	mlx_put_image_to_window(s->mlx, s->window, s->b, s->x * SIZE, s->y * SIZE);
	mlx_destroy_image(s->mlx, s->b);
	return (0);
}

int	coin_collection(t_needed *s)
{
	s->c = mlx_xpm_file_to_image(s->mlx, "my_images/coin.xpm", \
	&s->weight, &s->hight);
	if (!s->c)
	{
		ft_printf("Error\nSomething Goes Wrong!!, Try Again\n");
		exit(1);
	}
	mlx_put_image_to_window(s->mlx, s->window, s->c, s->x * SIZE, s->y * SIZE);
	mlx_destroy_image(s->mlx, s->c);
	return (0);
}

int	wall_backgroud(t_needed *s)
{
	s->w = mlx_xpm_file_to_image(s->mlx, "my_images/wall.xpm", \
	&s->weight, &s->hight);
	if (!s->w)
	{
		ft_printf("Error\nSomething Goes Wrong!!, Try Again\n");
		exit(1);
	}
	mlx_put_image_to_window(s->mlx, s->window, s->w, s->x * SIZE, s->y * SIZE);
	mlx_destroy_image(s->mlx, s->w);
	return (0);
}

int	door_exit(t_needed *s)
{
	if (s->coin > 0)
	{
		s->e = mlx_xpm_file_to_image(s->mlx, "my_images/door.xpm", \
		&s->weight, &s->hight);
		if (!s->c)
		{
			ft_printf("Error\nSomething Goes Wrong!!, Try Again\n");
			exit(1);
		}
		mlx_put_image_to_window(s->mlx, s->window, s->e, \
		s->x * SIZE, s->y * SIZE);
		mlx_destroy_image(s->mlx, s->e);
	}
	else
		door_exit2(s);
	return (0);
}

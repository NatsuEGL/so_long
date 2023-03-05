/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_image.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 13:53:05 by akaabi            #+#    #+#             */
/*   Updated: 2023/03/05 15:02:39 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	player_one(t_needed *s)
{
	if (!s->p)
	{
		ft_printf("Error\nSomething Goes Wrong!!, Try Again\n");
		exit(1);
	}
	if (s->playerp == 1)
	{
		s->p = mlx_xpm_file_to_image(s->mlx, "my_images/player.xpm", \
		&s->weight, &s->hight);
		mlx_put_image_to_window(s->mlx, s->window, s->p, \
		s->x * SIZE, s->y * SIZE);
		mlx_destroy_image(s->mlx, s->p);
	}
	else
	{
		s->p = mlx_xpm_file_to_image(s->mlx, "my_images/playerl.xpm", \
		&s->weight, &s->hight);
		mlx_put_image_to_window(s->mlx, s->window, s->p, \
		s->x * SIZE, s->y * SIZE);
		mlx_destroy_image(s->mlx, s->p);
	}
	return (0);
}

int	back_ground(t_needed *s)
{	
	if (!s->b)
	{
		ft_printf("Error\nSomething Goes Wrong!!, Try Again\n");
		exit(1);
	}
	s->b = mlx_xpm_file_to_image(s->mlx, "my_images/background.xpm", \
	&s->weight, &s->hight);
	mlx_put_image_to_window(s->mlx, s->window, s->b, s->x * SIZE, s->y * SIZE);
	mlx_destroy_image(s->mlx, s->b);
	return (0);
}

int	coin_collection(t_needed *s)
{
	if (!s->c)
	{
		ft_printf("Error\nSomething Goes Wrong!!, Try Again\n");
		exit(1);
	}
	s->c = mlx_xpm_file_to_image(s->mlx, "my_images/coin.xpm", \
	&s->weight, &s->hight);
	mlx_put_image_to_window(s->mlx, s->window, s->c, s->x * SIZE, s->y * SIZE);
	mlx_destroy_image(s->mlx, s->c);
	return (0);
}

int	wall_backgroud(t_needed *s)
{
	if (!s->w)
	{
		ft_printf("Error\nSomething Goes Wrong!!, Try Again\n");
		exit(1);
	}
	s->w = mlx_xpm_file_to_image(s->mlx, "my_images/wall.xpm", \
	&s->weight, &s->hight);
	mlx_put_image_to_window(s->mlx, s->window, s->w, s->x * SIZE, s->y * SIZE);
	mlx_destroy_image(s->mlx, s->w);
	return (0);
}

int	door_exit(t_needed *s)
{
	if (!s->c)
	{
		ft_printf("Error\nSomething Goes Wrong!!, Try Again\n");
		exit(1);
	}
	if (s->coin > 0)
	{
		s->e = mlx_xpm_file_to_image(s->mlx, "my_images/door.xpm", \
		&s->weight, &s->hight);
		mlx_put_image_to_window(s->mlx, s->window, s->e, \
		s->x * SIZE, s->y * SIZE);
		mlx_destroy_image(s->mlx, s->e);
	}
	else
	{
		s->e = mlx_xpm_file_to_image(s->mlx, "my_images/opendoor.xpm", \
		&s->weight, &s->hight);
		mlx_put_image_to_window(s->mlx, s->window, s->e, \
		s->x * SIZE, s->y * SIZE);
		mlx_destroy_image(s->mlx, s->e);
	}
	return (0);
}

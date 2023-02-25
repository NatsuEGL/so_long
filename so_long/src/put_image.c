/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_image.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 13:53:05 by akaabi            #+#    #+#             */
/*   Updated: 2023/02/24 17:45:01 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int player_one(t_needed *s)
{
	if (s->playerp == 1)
	{
		s->P = mlx_xpm_file_to_image(s->mlx,"my_images/player.xpm",&s->weight,&s->hight);
		mlx_put_image_to_window(s->mlx,s->window, s->P, s->x * SIZE, s->y * SIZE);
		mlx_destroy_image(s->mlx, s->P);
	}
	else 
	{
		s->P = mlx_xpm_file_to_image(s->mlx,"my_images/playerl.xpm",&s->weight,&s->hight);
		mlx_put_image_to_window(s->mlx,s->window, s->P, s->x * SIZE, s->y * SIZE);
		mlx_destroy_image(s->mlx, s->P);
	}
	return (0);
}

int back_ground(t_needed *s)
{
	s->B = mlx_xpm_file_to_image(s->mlx,"my_images/morning.xpm",&s->weight,&s->hight);
	mlx_put_image_to_window(s->mlx,s->window, s->B, s->x * SIZE, s->y * SIZE);
	mlx_destroy_image(s->mlx, s->B);
	return (0);
}

int Coin_collection(t_needed *s)
{
	s->C = mlx_xpm_file_to_image(s->mlx,"my_images/coin.xpm",&s->weight,&s->hight);
	mlx_put_image_to_window(s->mlx,s->window, s->C, s->x * SIZE, s->y * SIZE);
	mlx_destroy_image(s->mlx, s->C);
	return (0);
}

int wall_backgroud(t_needed *s)
{
	s->W = mlx_xpm_file_to_image(s->mlx,"my_images/wall.xpm",&s->weight,&s->hight);
	mlx_put_image_to_window(s->mlx,s->window, s->W, s->x * SIZE, s->y * SIZE);
	mlx_destroy_image(s->mlx, s->W);
	return (0);
}

int door_Exit(t_needed *s)
{
	if (s->Coin > 0)
	{
		s->E = mlx_xpm_file_to_image(s->mlx,"my_images/door.xpm",&s->weight,&s->hight);
		mlx_put_image_to_window(s->mlx,s->window, s->E, s->x * SIZE, s->y * SIZE);
		mlx_destroy_image(s->mlx, s->E);
	}
	else 
	{
		s->E = mlx_xpm_file_to_image(s->mlx,"my_images/opendoor.xpm",&s->weight,&s->hight);
		mlx_put_image_to_window(s->mlx,s->window, s->E, s->x * SIZE, s->y * SIZE);
		mlx_destroy_image(s->mlx, s->E);
	}
	return (0);
}

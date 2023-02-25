/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 09:22:11 by akaabi            #+#    #+#             */
/*   Updated: 2023/02/24 22:46:57 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
#define SO_LONG_H

#define SIZE 64

#include "../get_next_line/get_next_line.h"

#include <unistd.h>
#include <fcntl.h>
#include <mlx.h>

typedef struct needed {
	int moves;
	int px;
	int py;
	void *mlx;
	void *P;
	void *C;
	void *E;
	void *W;
	void *B;
	int hight;
	int weight;
	void *a;
	void *b;
	void *window;
	int	col;
	int	row;
	int	x;
	int	y;
	int player;
	int playerp;
	int Exit;
	int Coin;
	char **map;
}	t_needed;

int	first_row(t_needed *s, char *a);
int middle_row(t_needed *s, char *a);
int	last_row(t_needed *s, char *a);
int	check_characters(char a);
int make_mapf(char *tmp, t_needed *s);
int charcters_needed(t_needed *s);
int player_one(t_needed *s);
int back_ground(t_needed *s);
int Coin_collection(t_needed *s);
int wall_backgroud(t_needed *s);
int door_Exit(t_needed *s);
int window_display(t_needed *s);
int move(int key,t_needed *s);
int key_hook(int key,t_needed *s);
int move_r(t_needed *s);
int ft_close(t_needed *s);
int	checking(t_needed *s);
int move_r(t_needed *s);
int move_l(t_needed *s);
int move_u(t_needed *s);
int move_d(t_needed *s);
#endif 
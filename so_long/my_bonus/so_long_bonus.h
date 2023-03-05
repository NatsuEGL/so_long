/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 09:22:11 by akaabi            #+#    #+#             */
/*   Updated: 2023/03/05 14:09:15 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_BONUS_H
# define SO_LONG_BONUS_H

# define SIZE 64

# include "../get_next_line/get_next_line.h"
# include "../ft_printff/ft_printf.h"

# include <unistd.h>
# include <fcntl.h>
# include <mlx.h>
# include <stdlib.h>

typedef struct needed {
	int		moves;
	int		px;
	int		py;
	int		mx;
	int		my;
	void	*mlx;
	void	*p;
	void	*c;
	void	*e;
	void	*w;
	void	*b;
	void	*m;
	void	*m2;
	void	*m3;
	void	*m4;
	void	*m5;
	void	*m6;
	void	*m7;
	void	*m8;
	int		hight;
	int		weight;
	void	*window;
	int		col;
	int		row;
	int		x;
	int		y;
	int		xn;
	int		yn;
	int		i;
	int		j;
	int		player;
	int		playerp;
	int		exit;
	int		coin;
	int		monster;
	char	**map;
}	t_needed;

int		first_row(t_needed *s, char *a);
int		middle_row(t_needed *s, char *a);
int		last_row(t_needed *s, char *a);
int		check_characters(char a);
int		make_mapf(char *tmp, t_needed *s);
int		charcters_needed(t_needed *s);
int		my_characters(t_needed *s);
int		player_one(t_needed *s);
void	find_monster(t_needed *s);
int		back_ground(t_needed *s);
int		coin_collection(t_needed *s);
int		wall_backgroud(t_needed *s);
int		door_exit(t_needed *s);
int		monster(t_needed *s);
int		window_display(t_needed *s);
int		move(int key, t_needed *s);
int		key_hook(int key, t_needed *s);
int		move_r(t_needed *s);
int		ft_close(t_needed *s);
int		checking(t_needed *s);
int		move_r(t_needed *s);
int		move_l(t_needed *s);
int		move_u(t_needed *s);
int		move_d(t_needed *s);
int		mouve(t_needed *s);
char	*ft_itoa(int n);
void	*ft_calloc(size_t count, size_t size);
void	ft_bzero(void *s, size_t n);
int		move_dc(t_needed *s);
int		move_lc(t_needed *s);
int		move_uc(t_needed *s);
int		move_rc(t_needed *s);
#endif 
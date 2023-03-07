/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 09:22:11 by akaabi            #+#    #+#             */
/*   Updated: 2023/03/07 17:28:05 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# define SIZE 64

# include "../get_next_line/get_next_line.h"
# include "../ft_printff/ft_printf.h"

# include <unistd.h>
# include <fcntl.h>
# include <mlx.h>

typedef struct needed {
	int		moves;
	int		px;
	int		py;
	void	*mlx;
	void	*p;
	void	*c;
	void	*e;
	void	*w;
	void	*b;
	int		hight;
	int		weight;
	void	*window;
	int		col;
	int		row;
	int		x;
	int		y;
	int		player;
	int		exit;
	int		coin;
	char	**map;
	char	**mt;
}	t_needed;

int	first_row(t_needed *s, char *a);
int	middle_row(t_needed *s, char *a);
int	last_row(t_needed *s, char *a);
int	check_characters(char a);
int	my_characters(t_needed *s);
int	make_mapf(char *tmp, t_needed *s);
int	charcters_needed(t_needed *s);
int	player_one(t_needed *s);
int	back_ground(t_needed *s);
int	coin_collection(t_needed *s);
int	wall_backgroud(t_needed *s);
int	door_exit(t_needed *s);
int	window_display(t_needed *s);
int	move(int key, t_needed *s);
int	key_hook(int key, t_needed *s);
int	move_r(t_needed *s);
int	ft_close(t_needed *s);
int	checking(t_needed *s);
int	move_r(t_needed *s);
int	move_l(t_needed *s);
int	move_u(t_needed *s);
int	move_d(t_needed *s);
int	move_dc(t_needed *s);
int	move_uc(t_needed *s);
int	move_lc(t_needed *s);
int	move_rc(t_needed *s);
int	copy_map(char *a, t_needed *s);
int	filling_copy(t_needed *s);
int	fill_p(t_needed *s, int x, int y, int *z);
int	exit_check(t_needed *s);
int	collection_check(t_needed *s);
int	map_tracking(char *a, t_needed *s);
int	for_fr(t_needed *s);
int	last_r(t_needed *s);
#endif 
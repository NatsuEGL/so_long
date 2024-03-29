/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_moves.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 20:26:49 by akaabi            #+#    #+#             */
/*   Updated: 2023/03/06 15:42:30 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	move(int key, t_needed *s)
{
	if (key == 124 || key == 2)
		move_r(s);
	if (key == 123 || key == 0)
		move_l(s);
	if (key == 126 || key == 13)
		move_u(s);
	if (key == 125 || key == 1)
		move_d(s);
	return (0);
}

int	move_r(t_needed *s)
{
	if (s->map[s->py][s->px + 1] == '1')
		return (0);
	if (s->map[s->py][s->px + 1] == '0')
	{
		s->moves++;
		ft_printf("moves ->%d\n", s->moves);
		s->map[s->py][s->px] = '0';
		s->px += 1;
		s->map[s->py][s->px] = 'P';
	}
	else
		move_rc(s);
	return (1);
}

int	move_l(t_needed *s)
{
	if (s->map[s->py][s->px - 1] == '1')
		return (0);
	if (s->map[s->py][s->px - 1] == '0')
	{
		s->moves++;
		ft_printf("moves ->%d\n", s->moves);
		s->map[s->py][s->px] = '0';
		s->px -= 1;
		s->map[s->py][s->px] = 'P';
	}
	else
		move_lc(s);
	return (1);
}

int	move_u(t_needed *s)
{
	if (s->map[s->py - 1][s->px] == '1')
		return (0);
	if (s->map[s->py - 1][s->px] == '0')
	{
		s->moves++;
		ft_printf("moves ->%d\n", s->moves);
		s->map[s->py][s->px] = '0';
		s->py -= 1;
		s->map[s->py][s->px] = 'P';
	}
	else
		move_uc(s);
	return (1);
}

int	move_d(t_needed *s)
{
	if (s->map[s->py + 1][s->px] == '1')
		return (0);
	if (s->map[s->py + 1][s->px] == '0')
	{
		s->moves++;
		ft_printf("moves ->%d\n", s->moves);
		s->map[s->py][s->px] = '0';
		s->py += 1;
		s->map[s->py][s->px] = 'P';
	}
	else
		move_dc(s);
	return (1);
}

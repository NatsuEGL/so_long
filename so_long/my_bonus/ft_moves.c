/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_moves.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 20:26:49 by akaabi            #+#    #+#             */
/*   Updated: 2023/02/25 13:38:22 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int move(int key,t_needed *s)
{
	s->moves++;
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

int move_r(t_needed *s)
{
	if (s->map[s->py][s->px + 1] == '1')
		return (0);
	if (s->map[s->py][s->px + 1] == '0')
	{
		s->playerp = 1;
		s->map[s->py][s->px] = '0';
		s->px += 1;
		s->map[s->py][s->px] = 'P';
	}
	else if (s->map[s->py][s->px + 1] == 'C')
	{
		s->playerp = 1;
		s->map[s->py][s->px] = '0';
		s->px += 1;
		s->map[s->py][s->px] = 'P';
		s->Coin--;
	}
	else if (s->map[s->py][s->px + 1] == 'E' && s->Coin == 0)
	{
		s->playerp = 1;
		s->map[s->py][s->px] = '0';
		s->px += 1;
		s->map[s->py][s->px] = 'P';
		exit(1);
	}
	return (1);
}

int move_l(t_needed *s)
{
	if (s->map[s->py][s->px - 1] == '1')
		return (0);
	if (s->map[s->py][s->px - 1] == '0')
	{
		s->playerp = 2;
		s->map[s->py][s->px] = '0';
		s->px -= 1;
		s->map[s->py][s->px] = 'P';
	}
	else if (s->map[s->py][s->px - 1] == 'C')
	{
		s->playerp = 2;
		s->map[s->py][s->px] = '0';
		s->px -= 1;
		s->map[s->py][s->px] = 'P';
		s->Coin--;
	}
	else if (s->map[s->py][s->px - 1] == 'E' && s->Coin == 0)
	{
		s->playerp = 2;
		s->map[s->py][s->px] = '0';
		s->px -= 1;
		s->map[s->py][s->px] = 'P';
		exit(1);
	}
	return (1);
}

int move_u(t_needed *s)
{
	if (s->map[s->py - 1][s->px] == '1')
		return (0);
	if (s->map[s->py - 1][s->px] == '0')
	{
		s->map[s->py][s->px] = '0';
		s->py -= 1;
		s->map[s->py][s->px] = 'P';
	}
	else if (s->map[s->py - 1][s->px] == 'C')
	{
		s->map[s->py][s->px] = '0';
		s->py -= 1;
		s->map[s->py][s->px]= 'P';
		s->Coin--;
	}
	else if (s->map[s->py - 1][s->px] == 'E' && s->Coin == 0)
	{
		s->map[s->py][s->px] = '0';
		s->py -= 1;
		s->map[s->py][s->px] = 'P';
		exit(1);
	}
	return (1);
}

int move_d(t_needed *s)
{
	if (s->map[s->py + 1][s->px] == '1')
		return (0);
	if (s->map[s->py + 1][s->px] == '0')
	{
		s->map[s->py][s->px] = '0';
		s->py += 1;
		s->map[s->py][s->px] = 'P';
	}
	else if (s->map[s->py + 1][s->px] == 'C')
	{
		s->map[s->py][s->px] = '0';
		s->py += 1;
		s->map[s->py ][s->px] = 'P';
		s->Coin--;
	}
	else if (s->map[s->py + 1][s->px] == 'E' && s->Coin == 0)
	{
		s->map[s->py][s->px] = '0';
		s->py += 1;
		s->map[s->py][s->px] = 'P';
		exit(1);
	}
	return (1);
}

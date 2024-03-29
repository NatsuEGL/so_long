/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   for_norm.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 14:00:09 by akaabi            #+#    #+#             */
/*   Updated: 2023/03/07 16:59:12 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	move_dc(t_needed *s)
{
	if (s->map[s->py + 1][s->px] == 'C')
	{
		s->moves++;
		s->map[s->py][s->px] = '0';
		s->py += 1;
		s->map[s->py][s->px] = 'P';
		s->coin--;
	}
	else if (s->map[s->py + 1][s->px] == 'E' && s->coin == 0)
	{
		s->moves++;
		s->map[s->py][s->px] = '0';
		s->py += 1;
		s->map[s->py][s->px] = 'P';
		ft_printf("******YOU WIN********\n");
		exit(1);
	}
	return (0);
}

int	move_uc(t_needed *s)
{
	if (s->map[s->py - 1][s->px] == 'C')
	{
		s->moves++;
		s->map[s->py][s->px] = '0';
		s->py -= 1;
		s->map[s->py][s->px] = 'P';
		s->coin--;
	}
	else if (s->map[s->py - 1][s->px] == 'E' && s->coin == 0)
	{
		s->moves++;
		s->map[s->py][s->px] = '0';
		s->py -= 1;
		s->map[s->py][s->px] = 'P';
		ft_printf("******YOU WIN********\n");
		exit(1);
	}
	return (0);
}

int	move_lc(t_needed *s)
{
	if (s->map[s->py][s->px - 1] == 'C')
	{
		s->moves++;
		s->playerp = 2;
		s->map[s->py][s->px] = '0';
		s->px -= 1;
		s->map[s->py][s->px] = 'P';
		s->coin--;
	}
	else if (s->map[s->py][s->px - 1] == 'E' && s->coin == 0)
	{
		s->moves++;
		s->playerp = 2;
		s->map[s->py][s->px] = '0';
		s->px -= 1;
		s->map[s->py][s->px] = 'P';
		ft_printf("******YOU WIN********\n");
		exit(1);
	}
	return (0);
}

int	move_rc(t_needed *s)
{
	if (s->map[s->py][s->px + 1] == 'C')
	{
		s->moves++;
		s->playerp = 1;
		s->map[s->py][s->px] = '0';
		s->px += 1;
		s->map[s->py][s->px] = 'P';
		s->coin--;
	}
	else if (s->map[s->py][s->px + 1] == 'E' && s->coin == 0)
	{
		s->moves++;
		s->playerp = 1;
		s->map[s->py][s->px] = '0';
		s->px += 1;
		s->map[s->py][s->px] = 'P';
		ft_printf("******YOU WIN********\n");
		exit(1);
	}
	return (0);
}

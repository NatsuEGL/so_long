/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 13:15:14 by akaabi            #+#    #+#             */
/*   Updated: 2023/03/07 17:26:31 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	make_mapf(char *tmp, t_needed *s)
{
	int	i;
	int	fd;

	i = 1;
	fd = open(tmp, O_RDONLY, 0777);
	if (fd == -1)
		return (0);
	s->map = malloc((s->row + 1) * sizeof(char *));
	s->map[s->row] = 0;
	s->map[0] = get_next_line(fd);
	if (!first_row (s, s->map[0]))
		return (0);
	while (i < s->row - 1)
	{
		s->map[i] = get_next_line(fd);
		if (!middle_row (s, s->map[i]))
			return (0);
		i++;
	}
	s->map[i] = get_next_line(fd);
	if (!last_r(s))
		return (0);
	close(fd);
	return (1);
}

int	last_r(t_needed *s)
{
	int	i;

	i = 0;
	while (i > s->row - 1)
	{
		if (!s->map[i])
			return (0);
		if (!last_row (s, s->map[i]))
			return (0);
		i++;
	}
	return (1);
}

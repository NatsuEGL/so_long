/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_tracking.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 16:04:33 by akaabi            #+#    #+#             */
/*   Updated: 2023/03/05 18:41:13 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	copy_map(char *a, t_needed *s)
{
	int	fd;
	int	i;

	i = 0;
	fd = open(a, O_RDONLY,0777);
	if (fd == -1)
		return (-1);
	s->mt = malloc((s->row + 1) * sizeof(char *));
	if (!s->mt)
		return (-1);
	s->mt[s->row] = 0;
	while (i < s->row)
	{
		s->mt[i] = get_next_line(fd);
		i++;
	}
	return (0);
}

int	fill_p(t_needed *s, int x, int y, int *z)
{
	if (s->mt[y][x - 1] == '0' || s->mt[y][x - 1] == 'C')
	{
		*z = 1;
		s->mt[y][x - 1] = 'P';
	}
	if (s->mt[y][x + 1] == '0' || s->mt[y][x + 1] == 'C')
	{
		*z = 1;
		s->mt[y][x + 1] = 'P';
	}
	if (s->mt[y - 1][x] == '0' || s->mt[y - 1][x] == 'C')
	{
		*z = 1;
		s->mt[y - 1][x] = 'P';
	}
	if (s->mt[y + 1][x] == '0' || s->mt[y + 1][x] == 'C')
	{
		*z = 1;
		s->mt[y + 1][x] = 'P';
	}
	return (0);
}

int	filling_copy(t_needed *s)
{
	int	a;
	int	b;
	int	z;

	a = 0;
	z = 0;
	while (s->mt[a])
	{
		b = 0;
		while (s->mt[a][b])
		{
			if (s->mt[a][b] == 'P')
				fill_p(s, b, a, &z);
			b++;
		}
		a++;
	}
	if (z)
		filling_copy(s);
	return (0);
}

int	exit_check(char **s)
{
	int	a;
	int	b;

	a = 0;
	while (s[a])
	{
		b = 0;
		while (s[a][b])
		{
			if (s[a][b] == 'E')
			{
				if (s[a][b + 1] == 'P' || s[a][b - 1] == 'P' \
				|| s[a + 1][b] == 'P' || s[a - 1][b] == 'P')
					return (1);
			}
			b++;
		}
		a++;
	}
	return (0);
}

int	collection_check(char **s)
{
	int	a;
	int	b;
	int	coin;

	a = 0;
	coin = 0;
	while (s[a])
	{
		b = 0;
		while (s[a][b])
		{
			if (s[a][b] == 'C')
				coin++;
			b++;
		}
		a++;
	}
	if (coin != 0)
		return (0);
	if (exit_check(s) == 0)
		return (0);
	return (1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 12:26:48 by akaabi            #+#    #+#             */
/*   Updated: 2023/02/25 13:11:56 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int rowacol(char *p,t_needed *s)
{
	char *tmp;
	int fd;
	int i;
	
	fd = open(p, O_RDONLY, 0777);
	if (fd == -1)
		return (0);
	i = 0;
	tmp = get_next_line(fd);
	s->col = ft_strlen(tmp) - 1;
	// printf("-----------%d\n",s->col);
	while (tmp)
	{
		free(tmp);
		i++;
		tmp = get_next_line(fd);
	}
	s->row = i;
	close(fd);
	return (1);
}

int	ber_check(char *ber)
{
	int		a;
	int		b;
	char	*p;

	p = ".ber";
	a = ft_strlen(ber) - 1;
	b = ft_strlen(p) - 1;
	while (b >= 0)
	{
		if (ber[a] != p[b])
		{
			return (0);
		}
		a--;
		b--;
	}
	return (1);
}

int map_testing(char **s, t_needed *a)
{
	if (ber_check(s[1]) != 1)
		return (0);
	rowacol(s[1], a);
	if (make_mapf(s[1], a) != 1)
		return (0);
	if (charcters_needed(a) != 1)
		return (0);
	return (1);
}

int	main(int ac, char **av)
{
	(void)ac;
	(void)av;
	// int i;
	t_needed s;
	
	if (!map_testing(av,&s))
		return (0);
		// i = map_testing(av, &s);
		// // printf("-------------%d\n",i);
	// s.mlx = mlx_init();
    // s.window = mlx_new_window(s.mlx,1920,1080,"so_long");
    // s.C = mlx_xpm_file_to_image(s.mlx,"my_images/coin.xpm",&s.weight,&s.hight);
    // mlx_put_image_to_window(s.mlx,s.window,s.C,0,0);
    // mlx_loop(s.mlx);
	window_display(&s);
}
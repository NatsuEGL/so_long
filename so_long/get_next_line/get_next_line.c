/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 22:22:12 by akaabi            #+#    #+#             */
/*   Updated: 2023/02/17 09:45:17 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_uppdate(char *str)
{
	int		a;
	int		i;
	char	*p;

	a = 0;
	i = 0;
	while (str[a] && str[a] != '\n')
		a++;
	if (!str[a])
		return (free(str), NULL);
	p = malloc ((ft_strlen(str) - a) * sizeof(char));
	if (!p)
		return (free(str), NULL);
	while (str[a])
	{
		p[i] = str[a + 1];
		a++;
		i++;
	}
	return (free(str), p);
}

char	*ft_ret1(char *str)
{
	int		a;
	char	*p;

	a = 0;
	while (str[a] && str[a] != '\n')
		a++;
	p = malloc (sizeof(char) * (a + 2));
	if (!p)
		return (0);
	p[a + 1] = '\0';
	while (a > -1)
	{
		p[a] = str[a];
		a--;
	}
	return (p);
}

char	*ft_readp(int fd, char *str)
{
	int		i;
	char	*buff;

	buff = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buff)
		return (0);
	i = 1;
	while (i && ft_checkc(str, '\n'))
	{
		i = read(fd, buff, BUFFER_SIZE);
		if (i <= 0 && !*str)
			return (free(buff), free(str), NULL);
		else if (i == 0 && *str)
			break ;
		else if (i == -1 && *str)
			return (free(buff), free(str), NULL);
		buff[i] = '\0';
		str = ft_strjoin(str, buff);
	}
	return (free(buff), str);
}

char	*get_next_line(int fd)
{
	static char	*s;
	char		*nl;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	if (!s)
	{
		s = malloc(1);
		if (!s)
			return (0);
		s[0] = '\0';
	}
	s = ft_readp(fd, s);
	if (!s)
		return (NULL);
	nl = ft_ret1(s);
	s = ft_uppdate(s);
	return (nl);
}

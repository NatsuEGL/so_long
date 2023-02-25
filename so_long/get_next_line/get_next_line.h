/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 13:24:03 by akaabi            #+#    #+#             */
/*   Updated: 2023/02/21 16:34:29 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>
# include <limits.h>

size_t		ft_strlen(char *str);
size_t		ft_checkc(char *s, int c);
char		*ft_strjoin(char *s1, char *s2);
void		*ft_memcpy(void *dst, const void *src, size_t n);
char		*readp(int fd, char *str);
char		*get_next_line(int fd);
char		*uppdate(char *str);
char		*ft_ret1(char *str);

#endif
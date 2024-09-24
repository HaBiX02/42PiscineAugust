/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_io.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacarmon <jacarmon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 13:15:51 by jacarmon          #+#    #+#             */
/*   Updated: 2024/08/14 15:06:55 by jacarmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include "include/map.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "include/string_lib.h"

// If value is positive, it is the number on file. If -99, error occurred.
// Leaves fd just on the line jump that ends this line.
int	read_line_count(int fd, t_map *_map)
{
	char	c;
	int		res;
	int		ret;
	int		i;

	res = 0;
	ret = read(fd, &c, 1);
	while (c >= '0' && c <= '9' && ret > 0)
	{
		res *= 10;
		res += c - '0';
		ret = read(fd, &c, 1);
	}
	if (c != '\n' && ret > 0)
	{
		_map->free = c;
		ret = read(fd, &c, 1);
		_map->obstacle = c;
		ret = read(fd, &c, 1);
		_map->printed = c;
	}
	ret = read(fd, &c, 1);
	if (ret <= 0 || c != '\n')
		res = -99;
	return (res);
}

//Reads dinamically the first line, and leaves cursor on line break
//If error, returns NULL TO-DO SHOULD FREE MEMORY
char	*read_first_line_map(int fd, int *col_count)
{
	char	*map;
	char	*tmp;
	int		i;
	int		ret;
	char	c;

	i = 0;
	ret = read(fd, &c, 1);
	while (ret > 0 && c != '\n')
	{
		tmp = (char *)malloc (sizeof(char) * (i + 1));
		ft_strncpy(tmp, map, i);
		map = (char *)malloc(sizeof(char) * (i + 1));
		ft_strncpy(map, tmp, i);
		map[i] = c;
		ret = read(fd, &c, 1);
		i++;
	}
	if (ret <= 0)
		map = 0;
	else
		*col_count = i;
	return (map);
}

//Does the same as read_first_line_map, but starting on col_count parameter
//Equally TO-DO Should free memory
char	*read_line_map(int fd, int in_cOl_cnt)
{
	static char	*map;
	char		*tmp;
	int			i;
	char		c;
	int			ret;

	i = 0;
	ret = read(fd, &c, 1);
	map = (char *)malloc (sizeof(char) * (in_cOl_cnt));
	while (ret > 0 && c != '\n' && i < in_cOl_cnt)
	{
		map[i] = c;
		ret = read(fd, &c, 1);
		i++;
	}
	while (c != '\n' && ret > 0)
	{
		tmp = (char *)malloc(sizeof(char) * (in_cOl_cnt + (i - in_cOl_cnt)));
		ft_strncpy(tmp, map, i);
		map = (char *)malloc(sizeof(char) * (in_cOl_cnt + (i - in_cOl_cnt)));
		ft_strncpy(map, tmp, i);
		map[i++] = c;
		ret = read(fd, &c, 1);
	}
	return (map);
}

char	**read_map(int fd, int line_count, t_map tmap)
{
	char	**map;
	int		col_size;
	int		ret;
	int		i;

	map = (char **)malloc(sizeof(char *) * line_count);
	i = 1;
	col_size = 0;
	map[0] = read_first_line_map(fd, &col_size);
	ret = 1;
	while (ret > 0 && i < line_count)
	{
		map[i] = read_line_map(fd, col_size);
		i++;
	}
	if (ret < 0)
		return (0);
	tmap.map = map;
	tmap.n_cols = col_size;
	tmap.n_rows = line_count;
	return (map);
}

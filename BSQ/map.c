/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacarmon <jacarmon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 15:24:42 by jacarmon          #+#    #+#             */
/*   Updated: 2024/08/14 16:53:41 by jacarmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/map.h"
#include "include/string_lib.h"
#include <stdlib.h>

int	characters_valid(const t_map *tmap)
{
	int	i;
	int	j;
	int	res;

	i = 0;
	res = 1;
	while (i < tmap->n_rows && res)
	{
		j = 0;
		while (j < tmap->n_cols && res)
		{
			if (tmap->map[i][j] != tmap->free
			&& tmap->map[i][j] != tmap->obstacle)
				res = 0;
			j++;
		}
		i++;
	}
	return (res);
}

int	rows_with_same_length(char **map, int rows)
{
	int	i;
	int	tmp;
	int	row_length;

	i = 0;
	tmp = ft_strlen(map[i]);
	while (i < rows)
	{
		if (tmp != ft_strlen(map[i++]))
			return (0);
	}
	return (1);
}

int	map_is_valid(const t_map *map)
{
	if (!rows_with_same_length(map->map, map->n_rows))
		return (0);
	if (!characters_valid(map))
		return (0);
	if (map->obstacle == map->free || map->printed == map->free || map->printed == map->free )
		return (0);

	return (1);
}

#include <stdio.h>
//Esta es el error, pero como es debugging-purposes only no la toco
void	print_dp_table(int **dp, int rows, int cols)
{
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j){
			printf("%d ", dp[i][j]);
		}
		printf("\n");
	}
}

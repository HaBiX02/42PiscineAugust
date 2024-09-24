/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacarmon <jacarmon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 15:23:21 by jacarmon          #+#    #+#             */
/*   Updated: 2024/08/14 15:46:55 by jacarmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_H
# define MAP_H

typedef struct map
{
	char	free;
	char	obstacle;
	char	printed;
	int		n_rows;
	int		n_cols;
	char	**map;
}	t_map;

int		characters_valid(const t_map *tmap);
int		map_is_valid(const t_map *map);
int		rows_with_same_length(char **map, int size);
void	print_dp_table(int **dp, int rows, int cols);
#endif

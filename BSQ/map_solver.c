/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_solver.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacarmon <jacarmon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 13:33:32 by jacarmon          #+#    #+#             */
/*   Updated: 2024/08/14 15:12:24 by jacarmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/map.h"
#include "include/string_lib.h"
#include <stdlib.h>
#include "include/math_utils.h"

int	**create_dp_table(int n_rows, int n_cols)
{
	int	**dp;
	int	i;

	dp = (int **) malloc(sizeof(int *) * n_rows);
	i = 0;
	while (i < n_rows)
		dp[i++] = (int *) malloc(sizeof(int) * n_cols);
	return (dp);
}

void	free_dp_table(int **dp, int rows, int cols)
{
	int	i;

	i = 0;
	while (i < rows)
	{
		free(dp[i++]);
	}
}

//Function is currently 31 lines long TO-DO shorten-it
int	try_solve_bsq(t_map *map)
{
	int	**dp;
	int	i;
	int	j;
	int	rows;
	int	cols;

	rows = map->n_rows + 1;
	cols = map->n_cols + 1;
	dp = create_dp_table(rows, cols);
	i = 0;
	while (i < cols)
		dp[0][i++] = 0;
	i = 0;
	while (i < rows)
		dp[i++][0] = 0;
	i = 1;
	j = 1;
	while (i < rows)
	{
		j = 1;
		while (j < cols)
		{
			if (map->map[i - 1][j - 1] != map->obstacle)
				dp[i][j] = min_of_three(dp[i - 1][j], dp[i - 1][j - 1], dp[i][j - 1]) + 1;
			++j;
		}
		++i;
	}
	print_dp_table(dp, rows, cols);
	free_dp_table(dp, rows, cols);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_solver.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacarmon <jacarmon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 13:33:39 by jacarmon          #+#    #+#             */
/*   Updated: 2024/08/14 15:21:46 by jacarmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_SOLVER_H
# define MAP_SOLVER_H
# include "map.h"

int		**create_dp_table(int n_rows, int n_cols);
void	free_dp_table(int **dp, int rows, int cols);
int		try_solve_bsq(t_map *map);
#endif
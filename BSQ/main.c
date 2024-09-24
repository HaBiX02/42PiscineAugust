/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacarmon <jacarmon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 13:39:19 by jramire2          #+#    #+#             */
/*   Updated: 2024/08/14 16:44:48 by jacarmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/map.h"
#include "include/file_io.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "include/map_solver.h"

void	read_standard(t_map *map)
{
	
}

int	main(int argc, char **argv)
{
	t_map tmap;
	int fd;
	if (argc == 1)
		fd = 0;	
	else
		fd = open(argv[1], O_RDONLY);
	char c;
	int ret;
	char	**map;
	
	int line = read_line_count(fd, &tmap);
	if (line == -99)
	{
		close(fd);
		//2 is for perror
		write(2, "map error", 9);
		// error;
	}
	map = (char**)malloc(sizeof(char*) * line);
	
	printf("leido %i\n",line);
	int	i;
	i = 0;
	map = read_map(fd, line, tmap);
	tmap.map = map; //Hasta aquí esta correcto
	while (i < line)
	{
		printf("%s\n",tmap.map[i]);
		i++;
	}
	tmap.n_cols = 15;
	tmap.n_rows = 10;
	printf("leido %i\n",line);
	try_solve_bsq(&tmap);
	close(fd);
}

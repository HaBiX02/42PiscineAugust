/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_io.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacarmon <jacarmon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 17:02:47 by jacarmon          #+#    #+#             */
/*   Updated: 2024/08/14 12:43:32 by jacarmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include "map.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "string_lib.h"

int		read_line_count(int fd, t_map *_map);
char	*read_first_line_map(int fd, int *col_count);
char	*read_line_map(int fd, int in_cOl_cnt);
char	**read_map(int fd, int line_count, t_map tmap);

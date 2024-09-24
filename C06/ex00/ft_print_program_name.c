/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacarmon <jacarmon@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 19:25:35 by jacarmon          #+#    #+#             */
/*   Updated: 2024/08/13 19:36:44 by jacarmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	char	*tmp;

	i = argc;
	tmp = argv[0];
	i = 0;
	while (tmp[i])
	{
		write(1, &tmp[i], 1);
		++i;
	}
	write(1, "\n", 1);
}

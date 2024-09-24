/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacarmon <jacarmon@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 19:37:47 by jacarmon          #+#    #+#             */
/*   Updated: 2024/08/13 19:46:29 by jacarmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*tmp;

	i = 1;
	while (i < argc)
	{
		tmp = argv[i];
		j = 0;
		while (tmp[j])
		{
			write(1, &tmp[j], 1);
			++j;
		}
		write(1, "\n", 1);
		i++;
	}
}

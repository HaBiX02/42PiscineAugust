/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacarmon <jacarmon@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 19:53:01 by jacarmon          #+#    #+#             */
/*   Updated: 2024/08/13 19:53:31 by jacarmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*tmp;

	i = argc - 1;
	while (i > 0)
	{
		tmp = argv[i];
		j = 0;
		while (tmp[j])
		{
			write(1, &tmp[j], 1);
			++j;
		}
		write(1, "\n", 1);
		i--;
	}
}

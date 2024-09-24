/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacarmon <jacarmon@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 12:28:44 by jacarmon          #+#    #+#             */
/*   Updated: 2024/08/08 13:20:00 by jacarmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
#include <string.h>
#include <stdlib.h>*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int		i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n)
	{
		i++;
	}
	if (i == n)
		return (0);
	return (s1[i] - s2[i]);
}

/*int	main(int argc, char *argv[])
{
	int	tmp;
	tmp = ft_strncmp(argv[1],argv[2],atoi(argv[3]));
	//tmp = strncmp(argv[1],argv[2],atoi(argv[3]));
	tmp += 49;

	write(1, &tmp, 1);
}*/

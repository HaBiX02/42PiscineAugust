/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacarmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 19:46:03 by jacarmon          #+#    #+#             */
/*   Updated: 2024/08/06 21:32:56 by jacarmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	char			*tmp;

	i = 0;
	tmp = src;
	while (i < size - 1 && tmp[i] != '\0')
	{
		dest[i] = tmp[i];
		i++;
	}
	dest[i] = '\0';
	return (i);
}

int	main(void)
{
	char orig[] = "hola mundo";
	char copy[20];

	ft_strlcpy(copy, orig, 20);
	
	int	i;
	write(1, "\n", 1);
	i = 0;
	while(copy[i] != '\0')
	{
		write(1, &copy[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

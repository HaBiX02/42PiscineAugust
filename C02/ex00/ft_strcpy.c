/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacarmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 13:20:13 by jacarmon          #+#    #+#             */
/*   Updated: 2024/07/31 14:06:41 by jacarmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int		i;
	char	*tmp;

	i = 0;
	tmp = src;
	while (tmp[i] != '\0')
	{
		dest[i] = tmp[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char orig[11] = "hola mundo";
	char copy[11];
	char *tmp;

	tmp = ft_strcpy(copy, orig);
	
	int	i;

	i = 0;
	while(copy[i] != '\0')
	{
		write(1, &copy[i], 1);
		i++;
	}

	i = 0;
	while(tmp[i] != '\0')
	{
		write(1, &tmp[i],1);
		i++;
	}


}*/

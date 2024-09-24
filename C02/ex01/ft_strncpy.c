/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacarmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 15:46:48 by jacarmon          #+#    #+#             */
/*   Updated: 2024/08/06 21:00:03 by jacarmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*int	main(void)
{
	char orig[11] = "hola mundo";
	char copy[15];
	char *tmp;

	tmp = ft_strncpy(copy, orig, 15);
	
	int	i;

	i = 0;
	write(1, "Deberían ser iguales\n", 22);

	while(copy[i] != '\0')
	{
		write(1, &copy[i], 1);
		i++;
	}
	write(1, "\n", 1);

	i = 0;
	while(tmp[i] != '\0')
	{
		write(1, &tmp[i],1);
		i++;
	}
}*/

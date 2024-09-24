/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacarmon <jacarmon@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 18:36:33 by jacarmon          #+#    #+#             */
/*   Updated: 2024/08/08 13:14:05 by jacarmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] && size - i > 0)
		i++;
	if (size - i <= 0)
		return (i);
	while (src[j] && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (i);
}

/*int	main(void)
{
	char var1[50] = "I am first; ";
	char var2[] = " and i am second";
	ft_strlcat(var1, var2, 22);
	int	i;
	i = 0;

	while(var1[i])
	{
		write(1, &var1[i], 1);
		i++;
	}

}*/

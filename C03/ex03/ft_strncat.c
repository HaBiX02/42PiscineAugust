/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacarmon <jacarmon@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 13:01:24 by jacarmon          #+#    #+#             */
/*   Updated: 2024/08/08 13:16:19 by jacarmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*tmp;
	int				i;
	unsigned int	j;

	tmp = dest;
	i = 0;
	j = 0;
	while (tmp[i])
	{
		i++;
	}
	while (src[j] && j < nb)
	{
		tmp[i] = src[j];
		i++;
		j++;
	}
	tmp[i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char var1[50] = "I am first; ";
	char var2[] = " and i am second";
	ft_strncat(var1, var2, 9);
	int	i;
	i = 0;

	while(var1[i])
	{
		write(1, &var1[i], 1);
		i++;
	}

}*/

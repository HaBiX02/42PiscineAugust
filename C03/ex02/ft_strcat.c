/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacarmon <jacarmon@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 12:40:58 by jacarmon          #+#    #+#             */
/*   Updated: 2024/08/05 12:59:51 by jacarmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*tmp;
	int		i;
	int		j;

	tmp = dest;
	i = 0;
	j = 0;
	while (tmp[i])
	{
		i++;
	}
	while (src[j])
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
	char var1[50] = "yosoy primer; ";
	char var2[] = " y yo segundo";
	ft_strcat(var1, var2);
	int	i;
	i = 0;

	while(var1[i])
	{
		write(1, &var1[i], 1);
		i++;
	}

}*/

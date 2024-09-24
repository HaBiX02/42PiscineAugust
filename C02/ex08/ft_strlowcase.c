/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacarmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 18:56:31 by jacarmon          #+#    #+#             */
/*   Updated: 2024/07/31 19:08:05 by jacarmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_char_is_uppercase(char chr)
{
	int	res;

	res = 0;
	if (chr >= 'A' && chr <= 'Z')
	{
		res = 1;
	}
	return (res);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_char_is_uppercase(str[i]) == 1)
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char orig[] = "hola MUNDOO kasee 3";
	char *tmp;

	tmp = ft_strlowcase(orig);
	
	int	i;

	i = 0;
	while(tmp[i] != '\0')
	{
		write(1, &tmp[i], 1);
		i++;
	}
}*/

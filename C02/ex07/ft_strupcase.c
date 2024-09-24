/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacarmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 18:56:31 by jacarmon          #+#    #+#             */
/*   Updated: 2024/07/31 18:57:29 by jacarmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_char_is_lowercase(char chr)
{
	int	res;

	res = 0;
	if (chr >= 'a' && chr <= 'z')
	{
		res = 1;
	}
	return (res);
}

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_char_is_lowercase(str[i]) == 1)
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char orig[] = "hola mundo kasee 3";
	char *tmp;

	tmp = ft_strupcase(orig);
	
	int	i;

	i = 0;
	while(tmp[i] != '\0')
	{
		write(1, &tmp[i], 1);
		i++;
	}
}*/

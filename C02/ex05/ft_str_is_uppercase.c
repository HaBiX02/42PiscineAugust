/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacarmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 18:06:57 by jacarmon          #+#    #+#             */
/*   Updated: 2024/07/31 18:08:05 by jacarmon         ###   ########.fr       */
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

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	res;

	i = 0;
	res = 1;
	while (str[i] != '\0')
	{
		if (ft_char_is_uppercase(str[i]) == 0)
		{
			res = 0;
		}
		i++;
	}
	return (res);
}

//int main(void)
//{
//	char str_alph[] = "JAMAS";
//	char *str_noalph ="NOOOo 23423";
//
//	int res = ft_str_is_uppercase(str_alph);
//
//	res += 48;
//	write(1, &res, 1);
//	res = ft_str_is_uppercase(str_noalph);
//	res +=48;
//	write(1, &res, 1);
//
//}

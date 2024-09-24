/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacarmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 17:51:32 by jacarmon          #+#    #+#             */
/*   Updated: 2024/07/31 17:52:12 by jacarmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_char_is_numeric(char chr)
{
	int	res;

	res = 0;
	if (chr >= '0' && chr <= '9')
	{
		res = 1;
	}
	return (res);
}

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	res;
	int	tmp;

	i = 0;
	res = 1;
	tmp = 0;
	while (str[i] != '\0')
	{
		tmp = ft_char_is_numeric(str[i]);
		if (tmp == 0)
		{
			res = 0;
		}
		i++;
	}
	return (res);
}

//int main(void)
//{
//	char str_alph[] = "1234765";
//	char *str_noalph ="h0l4 M$*0s";
//
//	int res = ft_str_is_numeric(str_alph);
//
//	res += 48;
//	write(1, &res, 1);
//	res = ft_str_is_numeric(str_noalph);
//	res +=48;
//	write(1, &res, 1);
//
//}

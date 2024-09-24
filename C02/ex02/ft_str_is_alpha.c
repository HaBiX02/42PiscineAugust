/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacarmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 16:05:53 by jacarmon          #+#    #+#             */
/*   Updated: 2024/07/31 17:48:33 by jacarmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_char_is_alpha(char chr)
{
	int	res;

	res = 0;
	if (chr >= 65 && chr <= 90)
	{
		res = 1;
	}
	else if (chr >= 97 && chr <= 122)
	{
		res = 1;
	}
	return (res);
}

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	res;
	int	tmp;

	i = 0;
	res = 1;
	tmp = 0;
	while (str[i] != '\0')
	{
		tmp = ft_char_is_alpha(str[i]);
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
//	char str_alph[] = "holahMunDo";
//	char *str_noalph ="h0l4 M$*0s";
//
//	int res = ft_str_is_alpha(str_alph);
//
//	res += 48;
//	write(1, &res, 1);
//	res = ft_str_is_alpha(str_noalph);
//	res +=48;
//	write(1, &res, 1);
//
//}

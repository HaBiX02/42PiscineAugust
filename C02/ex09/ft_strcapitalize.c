/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacarmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 18:56:31 by jacarmon          #+#    #+#             */
/*   Updated: 2024/08/06 21:15:42 by jacarmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_char_is_alphanumeric(char chr)
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
	else if (chr >= '0' && chr <= '9')
	{
		res = 1;
	}
	return (res);
}

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

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	word_length;

	word_length = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (i > 0 && !ft_char_is_alphanumeric (str [i - 1]))
		{
			word_length = 0;
		}
		if (word_length == 0 && ft_char_is_lowercase(str[i]) == 1)
		{
			str[i] -= 32;
		}
		else if (word_length > 0 && ft_char_is_uppercase(str[i]))
		{
			str[i] += 32;
		}
		word_length++;
		i++;
	}
	return (str);
}
/*int	main(void)
{
	char orig[] = "saLut, comMent tU vAs ? 42mOTs";
	char *tmp;

	tmp = ft_strcapitalize(orig);
	
	int	i;

	i = 0;
	while(tmp[i] != '\0')
	{
		write(1, &tmp[i], 1);
		i++;
	}
}*/

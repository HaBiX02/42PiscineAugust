/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacarmon <jacarmon@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 18:09:22 by jacarmon          #+#    #+#             */
/*   Updated: 2024/08/01 18:39:20 by jacarmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	if (s1[i] == s2[i])
	{
		res = 0;
	}
	else if (s1[i] < s2[i])
	{
		res = -1;
	}
	else
	{
		res = 1;
	}
	return (res);
}
/*
int	main(void)
{
	char s1[] = "holc";
	char s2[] = "holb";

	int	tmp;
	tmp = ft_strcmp(s1,s2);
	tmp += 49;

	write(1, &tmp, 1);
}*/

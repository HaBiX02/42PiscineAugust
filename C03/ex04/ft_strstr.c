/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacarmon <jacarmon@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 13:43:14 by jacarmon          #+#    #+#             */
/*   Updated: 2024/08/08 13:12:09 by jacarmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	char	*subs;

	subs = 0;
	i = 0;
	j = 0;
	while (i >= 0 && str[i] && to_find[j])
	{
		if (to_find[j] == '\0')
			i = -1;
		else if (str[i] == to_find[j])
		{
			if (j == 0)
				subs = &str[i];
			j++;
		}
		else
		{
			j = 0;
			subs = 0;
		}
		i++;
	}
	return (subs);
}
/*
int	main(void)
{
	char	haystack[] = "abcdefghijklmnopqrstuvwxyzabdefghijklmnopqrstuvwxyz";
	char	needle[] = "ijklmnopq";
	char	*res;

	res = ft_strstr(haystack, needle);

	int	i;
	
	i = 0;
	if(res != 0)
	{
		while (res[i])
		{
			write(1, &res[i], 1);
			i++;
		}
	}
	
}*/

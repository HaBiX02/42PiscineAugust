/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacarmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 19:50:50 by jacarmon          #+#    #+#             */
/*   Updated: 2024/07/30 20:34:05 by jacarmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	char	*tmp;

	tmp = str;
	while (*tmp != '\0')
	{
		write(1, tmp, 1);
		tmp++;
	}
}

//int	main(void)
//{
//	char *str = "holaa k asee1";
//	ft_putstr(str);
//}

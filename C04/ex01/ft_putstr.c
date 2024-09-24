/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacarmon <jacarmon@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 13:42:55 by jacarmon          #+#    #+#             */
/*   Updated: 2024/08/07 13:42:57 by jacarmon         ###   ########.fr       */
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

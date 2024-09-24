/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacarmon <jacarmon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 17:43:46 by jacarmon          #+#    #+#             */
/*   Updated: 2024/07/27 17:03:00 by jacarmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_nums(char a1, char a2, char b1, char b2)
{
	if (!(a1 == 0 + 48 && a2 == 0 + 48 && b1 == 0 + 48 && b2 == 1 + 48))
	{
		write(1, ", ", 2);
	}
	write(1, &a1, 1);
	write(1, &a2, 1);
	write(1, " ", 1);
	write(1, &b1, 1);
	write(1, &b2, 1);
}

void	ft_print_second_pair(char a1, char a2)
{
	char	b1;
	char	b2;

	b1 = a1;
	while (b1 <= 9 + 48)
	{
		b2 = a2 + 1;
		while (b2 <= 9 + 48)
		{
			ft_print_nums(a1, a2, b1, b2);
			b2++;
		}
		b1++;
	}
}

void	ft_print_comb2(void)
{
	char	a1;
	char	a2;

	a1 = '0';
	while (a1 <= 9 + 48)
	{
		a2 = '0';
		while (a2 <= 9 + 48)
		{
			ft_print_second_pair(a1, a2);
			a2++;
		}
		a1++;
	}
	write(1, "\n", 1);
}

// int	main(void)
// {
// 	ft_print_comb2();
// 	return(0);
// }

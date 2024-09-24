/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacarmon <jacarmon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 17:43:46 by jacarmon          #+#    #+#             */
/*   Updated: 2024/07/27 13:47:00 by jacarmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_nums(char a, char b, char c)
{
	if (!(a == 0 + 48 && b == 1 + 48 && c == 2 + 48))
	{
		write(1, ", ", 2);
	}
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= 9 + 48)
	{
		b = a + 1;
		while (b <= 9 + 48)
		{
			c = b + 1;
			while (c <= 9 + 48)
			{
				ft_print_nums(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}

// int	main(void)
// {
// 	ft_print_comb();
// }

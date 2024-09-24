/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacarmon <jacarmon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 16:00:46 by jacarmon          #+#    #+#             */
/*   Updated: 2024/07/25 17:40:52 by jacarmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	no;
	char	p;

	no = 'N';
	p = 'P';
	if (n < 0)
	{
		write(1, &no, 1);
	}
	else
	{
		write(1, &p, 1);
	}
}

// int main (void)
// {
//     ft_is_negative(-42);
//     ft_is_negative(0);
//     ft_is_negative(42);
// }

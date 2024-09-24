/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacarmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 18:06:17 by jacarmon          #+#    #+#             */
/*   Updated: 2024/07/29 18:11:57 by jacarmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int*b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/*int main(void)
{
	int a = 2;
	int b = 4;

	ft_swap (&a, &b);

	int tmp = a + 48;
	write(1, &tmp,1);
	tmp = b + 48;
	write(1, &tmp,1);
}*/

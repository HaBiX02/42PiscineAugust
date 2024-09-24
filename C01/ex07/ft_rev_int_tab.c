/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacarmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 21:03:58 by jacarmon          #+#    #+#             */
/*   Updated: 2024/07/30 21:39:02 by jacarmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < size / 2)
	{
		tmp = tab[size - i - 1];
		tab[size - i - 1] = tab[i];
		tab[i] = tmp;
		i++;
	}
}

//int	main(void)
//{
//	int	i;
//	int	x;
//	int	arr[] = { 1, 2, 3, 4, 5, 6};
//	int	tmp;
//
//	ft_rev_int_tab(arr, 6);
//	i = 6;
//	x = 0;
//	while (x < 6)
//	{
//		tmp = arr[x] + 48;
//		write(1, &tmp, 1);
//		x++;
//	}
//
//}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacarmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 21:42:46 by jacarmon          #+#    #+#             */
/*   Updated: 2024/07/30 22:24:51 by jacarmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *tab1, int *tab2)
{
	int	_aux;

	_aux = 0;
	_aux = *tab1;
	*tab1 = *tab2;
	*tab2 = _aux;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	index;
	int	i;
	int	_min_spot;

	index = 0;
	i = 0;
	_min_spot = 0;
	while (index < size)
	{
		i = index;
		_min_spot = i;
		while (i < size)
		{
			if (tab[i] < tab[_min_spot])
			{
				_min_spot = i;
			}
			i++;
		}
		ft_swap(&tab[index], &tab[_min_spot]);
		index++;
	}
}

//int	main(void)
//{
//	int	i;
//	int	x;
//	int	arr[] = { 6, 4, 5, 3, 2, 1};
//	int	tmp;
//
//	ft_sort_int_tab(arr, 6);
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

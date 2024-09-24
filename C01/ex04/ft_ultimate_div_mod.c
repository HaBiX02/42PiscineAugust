/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacarmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 19:41:23 by jacarmon          #+#    #+#             */
/*   Updated: 2024/07/30 19:48:06 by jacarmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	_div;
	int	_mod;

	_div = *a / *b;
	_mod = *a % *b;
	*a = _div;
	*b = _mod;
}

//int main (void)
//{
//	int res1 = 25;
//	int res2 = 4;
//
//	ft_ultimate_div_mod(&res1, &res2);
//
//	res1 += 48;
//	res2 += 48;
//
//	write(1, &res1, 1);
//	write(1, &res2, 1);
//}

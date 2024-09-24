/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacarmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 19:24:18 by jacarmon          #+#    #+#             */
/*   Updated: 2024/07/30 19:48:20 by jacarmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	_div;
	int	_mod;

	_div = a / b;
	_mod = a % b;
	*div = _div;
	*mod = _mod;
}

//int main (void)
//{
//	int c = 25;
//	int div = 4;
//	int res1 = 0;
//	int res2 = 0;
//
//	ft_div_mod(c, div, &res1, &res2);
//
//	res1 += 48;
//	res2 += 48;
//
//	write(1, &res1, 1);
//	write(1, &res2, 1);
//}

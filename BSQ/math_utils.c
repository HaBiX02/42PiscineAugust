/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacarmon <jacarmon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 13:47:04 by jacarmon          #+#    #+#             */
/*   Updated: 2024/08/14 15:26:32 by jacarmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_min(int a, int b)
{
	if (a >= b)
		return (b);
	else
		return (a);
}

int	min_of_three(int a, int b, int c)
{
	return (ft_min(ft_min(a, b), c));
}

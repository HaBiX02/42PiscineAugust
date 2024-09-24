/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacarmon <jacarmon@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 13:44:22 by jacarmon          #+#    #+#             */
/*   Updated: 2024/08/11 21:07:34 by jacarmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int		i;
	long	nbr;

	if (nb < 0)
	{
		nbr = nb;
		nbr *= -1;
		write(1, "-", 1);
	}
	else
	{
		nbr = nb;
	}
	if (nbr / 10 > 0)
	{
		ft_putnbr(nbr / 10);
		i = nbr % 10;
		i += '0';
		write(1, &i, 1);
	}
	else
	{
		nbr += '0';
		write(1, &nbr, 1);
	}
}

/*int	main(void)
{
	int MIN = -2147483648;
	ft_putnbr(42);
	ft_putnbr(-42);
	ft_putnbr(0);
	ft_putnbr(2147483647);
	ft_putnbr(MIN);
}*/

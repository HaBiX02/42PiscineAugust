/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacarmon <jacarmon@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 15:00:42 by jacarmon          #+#    #+#             */
/*   Updated: 2024/08/07 15:02:32 by jacarmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_i_for_no_space(char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ')
	{
		i++;
	}
	return (i);
}

int	ft_atoi(char *str)
{
	int	i;
	int	pol;
	int	res;

	res = 0;
	pol = 1;
	i = ft_i_for_no_space(str);
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			pol *= -1;
		}
		i++;
	}
	while (str[i] <= '9' && str[i] >= '0')
	{
		res *= 10;
		res += str[i] - '0';
		i++;
	}
	return (res * pol);
}

/*void	ft_putnbr(int nb)
{
	int	i;
	int	nbr;
	if(nb < 0)
	{
		nbr = -1 * nb;
		write(1, "-", 1);
	}else
	{
		nbr = nb;
	}
	if (nbr / 10 > 0)
	{
		ft_putnbr(nbr / 10);
		i = nbr % 10;
		i += '0';
		write(1, &i, 1);
	}else
	{
		nbr += '0';
		write(1, &nbr, 1);
	}
	
}

int	main(void)
{
	char num[] = "      ---+--+1234ab567";
	int	i;
	i = ft_atoi(num);
	ft_putnbr(i);
	
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacarmon <jacarmon@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 17:27:22 by jacarmon          #+#    #+#             */
/*   Updated: 2024/08/08 13:54:00 by jacarmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_write_if_not_zero(int nbr, char *base, int printed_before)
{
	int	res;

	res = 0;
	if (((nbr != 0) && (nbr < ft_strlen(base))) || (printed_before))
	{
		write(1, &base[nbr], 1);
		res = 1;
	}
	return (res);
}

int	ft_check_base(char *base, int qty)
{
	int	res;
	int	i;
	int	j;

	i = 0;
	res = 1;
	if (qty <= 1)
		res = 0;
	else
	{
		while (base[i] && res)
		{
			j = i + 1;
			if (base [i] == '+' || base[i] == '-')
				res = 0;
			while (base[j] && res)
			{
				if (i != j && base[i] == base [j])
					res = 0;
				j++;
			}
			i++;
		}
	}
	return (res);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	pol;
	int	base_num;
	int	printed;

	printed = 0;
	base_num = ft_strlen(base);
	if (ft_check_base(base, base_num))
	{
		pol = 1;
		if (nbr < 0)
		{
			pol = -1;
			write(1, "-", 1);
		}
		if (nbr >= base_num)
		{
			ft_putnbr_base(nbr / base_num, base);
			printed = ft_write_if_not_zero(nbr % base_num, base, printed);
		}
		else
		{
			printed = ft_write_if_not_zero(nbr / base_num, base, printed);
			printed = ft_write_if_not_zero(nbr % base_num, base, printed);
		}
	}
}

/*int	main(void)
{
	char	base_bin[] = "01";
	char	base_hex[] = "0123456789ABCDEF";
	char	base_oct[] = "poniguay";
	
	ft_putnbr_base(0000000001, base_bin);
	write(1, "\n", 1); //1
	ft_putnbr_base(125, base_hex);
	write(1, "\n", 1);
	ft_putnbr_base(755, base_oct);
	write(1, "\n", 1); 
}*/

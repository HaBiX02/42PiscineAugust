/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacarmon <jacarmon@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 18:53:31 by jacarmon          #+#    #+#             */
/*   Updated: 2024/08/11 21:09:34 by jacarmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

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

int	ft_pow(int base, int exp)
{
	int	res;

	res = 1;
	while (exp > 0)
	{
		res *= base;
		exp--;
	}
	return (res);
}

int	ft_value_in_base(char *str, char *base, int base_num)
{
	int	i;
	int	j;
	int	res;
	int	num_len;

	num_len = ft_strlen(str);
	res = 0;
	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i] != base[j] && base[j])
			j++;
		if (base[j] == '\0')
			return (res);
		res += j * ft_pow(base_num, num_len - i - 1);
		i++;
	}
	return (res);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	pol;
	int	res;
	int	base_num;

	res = 0;
	pol = 1;
	i = 0;
	base_num = ft_strlen(base);
	if (ft_check_base(base, base_num))
	{
		while (str[i] == ' ')
			i++;
		while (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
			{
				pol *= -1;
			}
			i++;
		}
		res = ft_value_in_base(&str[i], base, base_num);
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
	char num[] = "    +--ppoiai";
	char base[] = "poniguay";
	int	i;
	i = ft_atoi_base(num, base);
	ft_putnbr(i);
	
}*/

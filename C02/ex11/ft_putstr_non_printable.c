/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacarmon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 15:17:58 by jacarmon          #+#    #+#             */
/*   Updated: 2024/08/05 13:39:17 by jacarmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_hex_value(char val)
{
	char	tmp;

	tmp = val;
	if (tmp < 10)
	{
		tmp += 48;
		write(1, &tmp, 1);
	}
	else
	{
		tmp -= 10;
		tmp += 97;
		write(1, &tmp, 1);
	}
}

void	ft_print_as_hex(char chr)
{
	char	tmp;
	int		i;

	i = 0;
	tmp = chr;
	while (tmp != 0)
	{
		write(1, "\\", 1);
		if (chr >= 16)
		{
			ft_print_hex_value(tmp / 16);
			tmp = tmp % 16;
		}
		else
		{
			if (i == 0)
			{
				write(1, "0", 1);
				i++;
			}
			ft_print_hex_value(tmp);
			tmp = 0;
		}
	}
}

int	ft_char_is_printable(char chr)
{
	int	res;

	res = 0;
	if (chr >= 32 && chr <= 126)
	{
		res = 1;
	}
	return (res);
}

void	ft_putstr_non_printable(char *str)
{
	char	*tmp;

	tmp = str;
	while (*tmp != '\0')
	{
		if (ft_char_is_printable(*tmp))
		{
			write(1, tmp, 1);
		}
		else
		{
			ft_print_as_hex(*tmp);
		}
		tmp++;
	}
}
/*
int	main(void)
{
	char *str = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(str);
}*/

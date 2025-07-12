/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbonneau <sbonneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 15:16:18 by sbonneau          #+#    #+#             */
/*   Updated: 2025/07/12 17:59:03 by sbonneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	rush(int x, int y);
void	ft_putchar(char c);

int ft_check_str(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9') return 0;
		i++;
	}

	return 1;
}

int	ft_atoi(char *str)
{
	int	sum;
	int	i;
	int	sign;

	i = 0;
	sum = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		++i;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		sum = (sum * 10) + (str[i] - '0');
		i++;
	}
	return (sign * sum);
}

int	main(int argv, char **argc)
{
	if (argv > 3)
		return 0;
	char	*x;
	char	*y;

	x = argc[1];
	y = argc[2];
	if (ft_check_str(x) == 0 || ft_check_str(y) == 0)
		return 0;
	rush(ft_atoi(x), ft_atoi(y));
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbonneau <sbonneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 15:16:18 by sbonneau          #+#    #+#             */
/*   Updated: 2025/07/12 23:04:36 by sbonneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	rush0(int x, int y);
void	rush1(int x, int y);
void	rush2(int x, int y);
void	rush3(int x, int y);
void	rush4(int x, int y);
void	ft_putchar(char c);

int	ft_check_str(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
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

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_check_args(char *x, char *y, char *z)
{
	int	x_len;

	x_len = 0;
	while (x[x_len])
		x_len++;
	if (x_len > 1 || ft_check_str(x) == 0)
	{
		ft_putstr("Version invalide, elle doit etre un nombre entre 0 et 4");
		return (0);
	}
	if (ft_check_str(y) == 0)
	{
		ft_putstr("Nombre de colonnes invalide");
		return (0);
	}
	if (ft_check_str(z) == 0)
	{
		ft_putstr("Nombre de lignes invalide");
		return (0);
	}
	return (1);
}

int	main(int argv, char **argc)
{
	char	*x;
	char	*y;
	char	*z;
	int		check_args;

	(void)argv;
	x = argc[1];
	y = argc[2];
	z = argc[3];
	check_args = ft_check_args(x, y, z);
	if (check_args == 0)
		return (0);
	if (x[0] == '0')
		rush0(ft_atoi(y), ft_atoi(z));
	if (x[0] == '1')
		rush1(ft_atoi(y), ft_atoi(z));
	if (x[0] == '2')
		rush2(ft_atoi(y), ft_atoi(z));
	if (x[0] == '3')
		rush3(ft_atoi(y), ft_atoi(z));
	if (x[0] == '4')
		rush4(ft_atoi(y), ft_atoi(z));
	return (0);
}

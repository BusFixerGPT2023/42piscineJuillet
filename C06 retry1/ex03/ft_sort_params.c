/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulai <yulai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 00:57:25 by yulai             #+#    #+#             */
/*   Updated: 2025/07/31 00:34:24 by yulai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <string.h>
// #include <stdio.h>

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

int	ft_strcmp(char *s1, char *s2)
{
	int	n;
	int	dif;

	n = 0;
	dif = 0;
	while (s1[n] != s2[n])
	{
		dif = s1[n] - s2[n];
		return (dif);
	}
	return (dif);
}

void	ft_sort_argv(char *argv[], int argc)
{
	int		i;
	int		j;
	char	*p;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) < 0)
			{
				p = argv[i];
				argv[i] = argv[j];
				argv[j] = p;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	n;

	ft_sort_argv(argv, argc);
	n = argc;
	while (n > 1)
	{
		write(1, argv[n - 1], ft_strlen(argv[n - 1]));
		write(1, "\n", 1);
		n--;
	}
	return (0);
}

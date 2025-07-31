/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulai <yulai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 00:45:48 by yulai             #+#    #+#             */
/*   Updated: 2025/07/30 00:59:48 by yulai            ###   ########.fr       */
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

int	main(int argc, char *argv[])
{
	int	n;

	n = argc;
	while (n > 1)
	{
		write(1, argv[n - 1], ft_strlen(argv[n - 1]));
		write(1, "\n", 1);
		n--;
	}
	return (0);
}

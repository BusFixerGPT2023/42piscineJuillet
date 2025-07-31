/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulai <yulai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 00:37:23 by yulai             #+#    #+#             */
/*   Updated: 2025/07/30 00:47:24 by yulai            ###   ########.fr       */
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
	int	i;

	i = 1;
	n = argc;
	while (n > 1)
	{
		write(1, argv[i], ft_strlen(argv[i]));
		write(1, "\n", 1);
		n--;
		i++;
	}
	return (0);
}

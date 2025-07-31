/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulai <yulai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 00:27:17 by yulai             #+#    #+#             */
/*   Updated: 2025/07/30 00:36:54 by yulai            ###   ########.fr       */
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
	int	nb;

	(void)argc;
	nb = ft_strlen(argv[0]);
	write(1, argv[0], nb);
	write(1, "\n", 1);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulai <yulai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 20:33:38 by yulai             #+#    #+#             */
/*   Updated: 2025/07/19 21:15:02 by yulai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	show(int nb);
void	showstatic(int nb);
void	ft_print_comb2(void);

void	ft_print_comb2(void)
{
	int	num;

	num = 0;
	while (num <= 98)
	{
		show(num);
		num++;
	}
}

void	show(int nb)
{
	char	n1;
	char	n2;

	nb++;
	n2 = nb / 10 + '0';
	n1 = nb % 10 + '0';
	while (n2 <= '9')
	{
		while (n1 <= '9')
		{
			showstatic(nb -1);
			write(1, &n2, 1);
			write(1, &n1, 1);
			if (!(n1 == '9' && n2 == '9' && nb == 99))
				write(1, ", ", 2);
			n1++;
		}
		if (n1 == '9' +1)
			n1 = '0';
		n2++;
	}
}

void	showstatic(int nb)
{
	char	n1;
	char	n2;

	n2 = nb / 10 + 48;
	n1 = nb % 10 + 48;
	write(1, &n2, 1);
	write(1, &n1, 1);
	write(1, " ", 1);
}

// int	main(void)
// {
// 	ft_print_comb2(void);
// 	return (0);
// }

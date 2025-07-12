/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbonneau <sbonneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 16:39:54 by sbonneau          #+#    #+#             */
/*   Updated: 2025/07/12 22:33:55 by sbonneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	check_rush1(int x, int y, int row, int col)
{
	if ((row == 0 || row == y - 1) && (col == 0 || col == x - 1))
	{
		if (row == 0)
		{
			if (col == 0)
				ft_putchar('/');
			else
				ft_putchar('\\');
		}
		else if (row == y - 1)
		{
			if (col == 0)
				ft_putchar('\\');
			else
				ft_putchar('/');
		}
	}
	else if (row == 0 || row == y - 1)
		ft_putchar('*');
	else if (col == 0 || col == x - 1)
		ft_putchar('*');
	else
		ft_putchar(' ');
}

void	rush1(int x, int y)
{
	int	row;
	int	col;

	row = 0;
	col = 0;
	if (x <= 0 || y <= 0)
		return ;
	while (row < y)
	{
		col = 0;
		while (col < x)
		{
			check_rush1(x, y, row, col);
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}

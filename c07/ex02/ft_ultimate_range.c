/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulai <yulai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 03:31:57 by yulai             #+#    #+#             */
/*   Updated: 2025/07/31 19:06:17 by yulai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	if (min >= max)
		return (0);
	size = max - min;
	*range = malloc(size * sizeof(int));
	if (*range == NULL)
		return (-1);
	i = 0;
	while (i < size)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (size);
}

// int main()
// {
// 	int *rg;
// 	ft_ultimate_range(&rg,3,6);
// 	for (int i = 0; i < 3; i++)
// 		printf("%d",*(rg+i));
// 	free(rg);
// }

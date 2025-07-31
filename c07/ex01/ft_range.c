/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulai <yulai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 03:20:55 by yulai             #+#    #+#             */
/*   Updated: 2025/07/31 19:07:46 by yulai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*rg;
	int	i;

	if (min >= max)
		return (NULL);
	size = max - min;
	rg = malloc(size * sizeof(int));
	if (!rg)
		return (NULL);
	i = 0;
	while (i < size)
	{
		rg[i] = min + i;
		i++;
	}
	return (rg);
}

// int main()
// {
// 	int *rg = ft_range(3,6);
// 	for (int i = 0; i < 3; i++)
// 	{
// 		printf("%d",*(rg+i));
// 	}
// }
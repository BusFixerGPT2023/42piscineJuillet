/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulai <yulai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 00:26:27 by yulai             #+#    #+#             */
/*   Updated: 2025/07/23 21:11:46 by yulai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		while (!(s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i]))
			return (*(s1 + i) - *(s2 + i));
		i++;
	}
	return (0);
}

// int main()
// {
// 	char str1[]="gfD";
// 	char str2[]="gfdd";
// 	printf("%d\n",strncmp(str1,str2,3));
// 	printf("%d",ft_strncmp(str1,str2,3));
// }
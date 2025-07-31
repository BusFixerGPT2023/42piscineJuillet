/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulai <yulai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 00:05:01 by yulai             #+#    #+#             */
/*   Updated: 2025/07/23 21:10:43 by yulai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (*(s1 + i) - *(s2 + i));
}

// int main()
// {
// 	char str1[] = "";
// 	char str2[] = "";
// 	printf("%d",ft_strcmp(str1,str2));
// 	printf("%d",strcmp(str1,str2));
// }
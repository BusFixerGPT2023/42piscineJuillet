/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulai <yulai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 16:04:46 by yulai             #+#    #+#             */
/*   Updated: 2025/07/23 21:27:21 by yulai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

// int main()
// {
// 	char dest1[11] = "Test1";
// 	char dest2[11] = "Test1";
// 	char str[6] = "H OOJ";
// 	ft_strcat(dest1,str);
// 	printf("%s \n",dest1);
// 	strcat(dest2,str);
// 	printf("%s",dest2);
// }
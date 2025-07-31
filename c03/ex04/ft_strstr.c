/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulai <yulai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 22:18:27 by yulai             #+#    #+#             */
/*   Updated: 2025/07/24 00:15:02 by yulai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	n;
	int	lg;

	i = 0;
	j = 0;
	n = 0;
	lg = ft_strlen(to_find);
	while (str[i] != '\0')
	{
		while (to_find[j] != '\0' && j < lg)
		{
			if (str[i + j] == to_find[j])
				n++;
			if (n == lg)
				return (str + i);
			j++;
		}
		n = 0;
		j = 0;
		i++;
	}
	return (NULL);
}

// int	main()
// {
// 	char haystack[] = "abcabc";
// 	char needle[] = "cab";
// 	char	*the = ft_strstr(haystack,needle);
// 	printf("%s\n",the);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulai <yulai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 03:45:32 by yulai             #+#    #+#             */
/*   Updated: 2025/07/31 18:58:57 by yulai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	countstr(int size, char **strs, char *sep)
{
	int	m;
	int	i;

	m = 0;
	i = 0;
	while (i < size)
	{
		m += ft_strlen(strs[i]);
		i++;
	}
	m += ft_strlen(sep) * (size - 1);
	return (m);
}

int	ft_strcpy(char *dest, char *src, int index)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[index + i] = src[i];
		i++;
	}
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		nb;
	char	*copie;
	int		i;

	nb = 0;
	copie = malloc(countstr(size, strs, sep) * (sizeof(char)));
	i = 0;
	while (i < size)
	{
		nb += ft_strcpy(copie, strs[i], nb);
		if (i < size - 1)
			nb += ft_strcpy(copie, sep, nb);
		i++;
	}
	copie[nb] = '\0';
	return (copie);
}

// int main()
// {
// 	char *str[] = {"banana", "apple", "Orange"}; //"banana", "apple", "Orange"
// 	char *sep = ".OKO."; //.OKO.
// 	char *new;
// 	new = ft_strjoin(3,str,sep);
// 	printf("%s",new);
// }
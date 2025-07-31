/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulai <yulai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 01:53:21 by yulai             #+#    #+#             */
/*   Updated: 2025/07/31 19:03:29 by yulai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		len;
	char	*copie;
	int		i;

	i = 0;
	len = ft_strlen(src);
	copie = malloc((len + 1) * sizeof(char));
	if (copie == NULL)
		return (0);
	while (i <= len)
	{
		copie[i] = src[i];
		i++;
	}
	return (copie);
}

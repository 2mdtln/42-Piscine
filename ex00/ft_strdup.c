/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaheri <mtaheri@student.42istanbul.com.tr>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 13:08:50 by mtaheri           #+#    #+#             */
/*   Updated: 2025/11/23 13:38:33 by mtaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	z;

	z = 0;
	while (*str)
	{
		str++;
		z++;
	}
	return (z);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	x;
	unsigned int	y;

	x = 0;
	y = 0;
	while (src[x])
		x++;
	if (size == 0)
		return (x);
	while (src[y] && y < size - 1)
	{
		dest[y] = src[y];
		y++;
	}
	dest[y] = '\0';
	return (x);
}

char	*ft_strdup(char *src)
{
	int		len;
	char	*ret;

	len = ft_strlen(src);
	ret = malloc(len + 1);
	if (!ret)
		return (NULL);
	ft_strlcpy(ret, src, len + 1);
	return (ret);
}

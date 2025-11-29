/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaheri <mtaheri@student.42istanbul.com.tr>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 07:36:23 by mtaheri           #+#    #+#             */
/*   Updated: 2025/11/26 07:36:24 by mtaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

static char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*cpy;

	if (!src)
		return (NULL);
	cpy = malloc(ft_strlen(src) + 1);
	if (!cpy)
		return (NULL);
	ft_strcpy(cpy, src);
	return (cpy);
}

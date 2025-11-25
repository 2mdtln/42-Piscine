/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaheri <mtaheri@student.42istanbul.com.tr>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 02:53:27 by mtaheri           #+#    #+#             */
/*   Updated: 2025/11/25 03:38:42 by mtaheri          ###   ########.fr       */
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

char	*ft_strcpy(char *dest, char *src)
{
	unsigned int	z;

	z = 0;
	while (src[z])
	{
		dest[z] = src[z];
		z++;
	}
	dest[z] = '\0';
	return (dest);
}

int	ft_len_total(char **s, int n, int sep_len)
{
	int	total;
	int	i;

	total = 0;
	i = 0;
	while (i < n)
	{
		total += ft_strlen(s[i]);
		total += sep_len;
		i++;
	}
	return (total - sep_len);
}

char	*app(char *dst, char *src)
{
	ft_strcpy(dst, src);
	return (dst + ft_strlen(src));
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		full;
	int		i;
	char	*p;
	char	*out;

	if (size == 0)
		return (malloc(1));
	full = ft_len_total(strs, size, ft_strlen(sep));
	out = malloc(full + 1);
	if (!out)
		return (0);
	p = out;
	i = 0;
	while (i < size)
	{
		p = app(p, strs[i]);
		if (i < size - 1)
			p = app(p, sep);
		i++;
	}
	*p = '\0';
	return (out);
}

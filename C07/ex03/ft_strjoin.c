/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaheri <mtaheri@student.42istanbul.com.tr>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 02:53:27 by mtaheri           #+#    #+#             */
/*   Updated: 2025/11/25 08:43:12 by mtaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*strcpym(char *dst, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (dst + i);
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

char	*ft_empty(void)
{
	char	*p;

	p = malloc(1);
	if (p)
		p[0] = 0;
	return (p);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		full;
	int		i;
	char	*out;
	char	*p;

	if (size == 0)
		return (ft_empty());
	full = ft_len_total(strs, size, ft_strlen(sep));
	out = malloc(full + 1);
	if (!out)
		return (0);
	p = out;
	i = 0;
	while (i < size)
	{
		p = strcpym(p, strs[i]);
		if (i < size - 1)
			p = strcpym(p, sep);
		i++;
	}
	*p = 0;
	return (out);
}

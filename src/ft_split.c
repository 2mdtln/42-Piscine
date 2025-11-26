/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaheri <mtaheri@student.42istanbul.com.tr>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 07:36:21 by mtaheri           #+#    #+#             */
/*   Updated: 2025/11/26 23:16:21 by mtaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

static int	ft_count_lines(char *str)
{
	int	count;
	int	i;

	if (!str || !str[0])
		return (0);
	count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			count++;
		i++;
	}
	if (str[i - 1] != '\n')
		count++;
	return (count);
}

static char	*ft_extract_line(char *src, int len)
{
	char	*line;
	int		idx;

	line = malloc(len + 1);
	if (!line)
		return (NULL);
	idx = 0;
	while (idx < len)
	{
		line[idx] = src[idx];
		idx++;
	}
	line[len] = 0;
	return (line);
}

static void	ft_free_failed_alloc(char **array, int used)
{
	while (used--)
		free(array[used]);
	free(array);
}

static int	ft_fill_lines(char **lines, char *content, int total)
{
	int		i;
	int		start;
	int		length;

	i = 0;
	start = 0;
	while (content[start] && i < total)
	{
		length = 0;
		while (content[start + length]
			&& content[start + length] != '\n')
			length++;
		lines[i] = ft_extract_line(content + start, length);
		if (!lines[i])
		{
			ft_free_failed_alloc(lines, i);
			return (0);
		}
		i++;
		start += length;
		if (content[start] == '\n')
			start++;
	}
	lines[i] = NULL;
	return (1);
}

char	**ft_split(char *content)
{
	char	**lines;
	int		total;

	if (!content)
		return (NULL);
	total = ft_count_lines(content);
	lines = malloc(sizeof(char *) * (total + 1));
	if (!lines)
		return (NULL);
	if (total == 0)
	{
		lines[0] = NULL;
		return (lines);
	}
	if (!ft_fill_lines(lines, content, total))
		return (NULL);
	return (lines);
}

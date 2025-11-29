/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_manage_file.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaheri <mtaheri@student.42istanbul.com.tr>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 07:36:07 by mtaheri           #+#    #+#             */
/*   Updated: 2025/11/26 07:36:08 by mtaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

static char	*ft_append_chunk(char *dest, char *chunk, int len)
{
	char	*joined;
	int		i;
	int		origin;

	origin = 0;
	if (dest)
		origin = ft_strlen(dest);
	joined = malloc(origin + len + 1);
	if (!joined)
		return (NULL);
	i = 0;
	while (i < origin)
	{
		joined[i] = dest[i];
		i++;
	}
	while (i < origin + len)
	{
		joined[i] = chunk[i - origin];
		i++;
	}
	joined[i] = 0;
	free(dest);
	return (joined);
}

static int	ft_fill_from_stdin(char **joined)
{
	char	buffer[STDIN_CHUNK];
	char	*temp;
	int		bytes;

	while (1)
	{
		bytes = read(0, buffer, STDIN_CHUNK);
		if (bytes <= 0)
			return (bytes == 0);
		temp = ft_append_chunk(*joined, buffer, bytes);
		if (!temp)
		{
			free(*joined);
			*joined = NULL;
			return (0);
		}
		*joined = temp;
		if (bytes < STDIN_CHUNK)
			return (1);
	}
}

char	**ft_read_stdin(void)
{
	char	*joined;
	char	**result;

	joined = NULL;
	if (!ft_fill_from_stdin(&joined) || !joined)
		return (NULL);
	result = ft_split(joined);
	free(joined);
	return (result);
}

char	**ft_read_file(char *pathmap)
{
	char	*buffer;
	char	**split;

	buffer = ft_load_file(pathmap);
	if (!buffer)
		return (NULL);
	split = ft_split(buffer);
	free(buffer);
	return (split);
}

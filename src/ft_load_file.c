/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_load_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaheri <mtaheri@student.42istanbul.com.tr>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 07:58:26 by mtaheri           #+#    #+#             */
/*   Updated: 2025/11/26 23:02:31 by mtaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

static int	ft_fill_buffer(int file, char *buffer, int size)
{
	int	bytes;

	bytes = read(file, buffer, size);
	close(file);
	if (bytes < 0)
		return (-1);
	buffer[bytes] = 0;
	return (bytes);
}

int	ft_get_file_size(char *pathmap, int *file)
{
	int		fd;
	int		size;
	char	buffer;

	if (file)
		*file = -1;
	fd = open(pathmap, O_RDONLY);
	if (fd < 0)
		return (-1);
	size = 0;
	while (read(fd, &buffer, 1) > 0)
		size++;
	close(fd);
	return (size);
}

char	*ft_load_file(char *pathmap)
{
	char	*buffer;
	int		size;
	int		file;

	size = ft_get_file_size(pathmap, NULL);
	if (size <= 0)
		return (NULL);
	file = open(pathmap, O_RDONLY);
	if (file < 0)
		return (NULL);
	buffer = malloc(size + 1);
	if (!buffer)
	{
		close(file);
		return (NULL);
	}
	if (ft_fill_buffer(file, buffer, size) < 0)
	{
		free(buffer);
		return (NULL);
	}
	return (buffer);
}

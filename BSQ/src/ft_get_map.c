/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaheri <mtaheri@student.42istanbul.com.tr>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 07:36:01 by mtaheri           #+#    #+#             */
/*   Updated: 2025/11/26 07:36:02 by mtaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

static void	ft_reset_map(t_map *map)
{
	map->empty_char = 0;
	map->block_char = 0;
	map->full_char = 0;
	map->rows = 0;
	map->cols = 0;
	map->is_valid = 0;
	map->matrix = NULL;
}

static void	ft_extract_symbols(t_map *map, char *line)
{
	int	len;

	if (!line)
		return ;
	len = ft_strlen(line);
	if (len < 4)
		return ;
	map->full_char = line[len - 1];
	map->block_char = line[len - 2];
	map->empty_char = line[len - 3];
}

static int	ft_has_valid_legend(t_map *map)
{
	if (!map->empty_char || !map->block_char || !map->full_char)
		return (0);
	if (map->empty_char == map->block_char
		|| map->empty_char == map->full_char
		|| map->block_char == map->full_char)
		return (0);
	return (1);
}

static void	ft_copy_matrix(t_map *map, char **raw_lines)
{
	if (map->is_valid <= 0)
		return ;
	if (raw_lines[1])
		map->cols = ft_strprintable_len(raw_lines[1]);
	map->matrix = ft_copy(raw_lines + 1);
	if (!map->matrix)
		map->is_valid = 0;
}

t_map	ft_get_map(int has_file, char *path)
{
	t_map	map;
	char	**raw_lines;

	ft_reset_map(&map);
	if (!has_file)
		raw_lines = ft_read_stdin();
	else
		raw_lines = ft_read_file(path);
	if (!raw_lines)
	{
		map.is_valid = -1;
		return (map);
	}
	ft_extract_symbols(&map, raw_lines[0]);
	map.rows = ft_atoi(raw_lines[0]);
	if (!ft_has_valid_legend(&map))
		map.is_valid = 0;
	else
		map.is_valid = ft_is_map_valid(raw_lines, map);
	ft_copy_matrix(&map, raw_lines);
	ft_free(raw_lines);
	return (map);
}

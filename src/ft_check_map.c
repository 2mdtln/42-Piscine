/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaheri <mtaheri@student.42istanbul.com.tr>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 07:35:47 by mtaheri           #+#    #+#             */
/*   Updated: 2025/11/26 07:35:49 by mtaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int	ft_check_map_line_len(char **array_map)
{
	int	expected;
	int	i;
	int	current;

	if (!array_map || !array_map[1])
		return (0);
	expected = -1;
	i = 1;
	while (array_map[i])
	{
		current = ft_strprintable_len(array_map[i]);
		if (expected == -1)
			expected = current;
		else if (current != expected)
			return (0);
		i++;
	}
	if (expected <= 0)
		return (0);
	return (1);
}

static int	ft_is_valid_row(char *line, t_map map)
{
	int	col;

	if (!line)
		return (0);
	col = 0;
	while (line[col] && ((line[col]) >= 32 && (line[col]) <= 126))
	{
		if (line[col] != map.empty_char && line[col] != map.block_char)
			return (0);
		col++;
	}
	if (col == 0)
		return (0);
	return (1);
}

int	ft_check_map_line_value(char **array_map, t_map map)
{
	int	lines_found;
	int	limit;
	int	row;

	if (!array_map || !array_map[0])
		return (0);
	limit = ft_atoi(array_map[0]);
	if (limit <= 0)
		return (0);
	row = 1;
	lines_found = 0;
	while (array_map[row])
	{
		if (!ft_is_valid_row(array_map[row], map))
			return (0);
		lines_found++;
		row++;
	}
	if (lines_found != limit)
		return (0);
	return (1);
}

int	ft_is_map_valid(char **array_map, t_map map)
{
	if (!ft_check_map_line_len(array_map))
		return (0);
	if (!ft_check_map_line_value(array_map, map))
		return (0);
	return (1);
}

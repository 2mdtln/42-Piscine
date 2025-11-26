/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_square_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaheri <mtaheri@student.42istanbul.com.tr>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 08:24:56 by mtaheri           #+#    #+#             */
/*   Updated: 2025/11/26 23:10:48 by mtaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

static void	ft_prepare_square(t_square *square, t_square best)
{
	int	start_size;

	start_size = best.size;
	if (start_size == 0)
		start_size = 1;
	square->size = start_size - 1;
}

t_square	find_square(t_map map, t_square best, int row, int col)
{
	t_square	current;

	current.row = row;
	current.col = col;
	current.size = 0;
	if (!map.matrix || map.matrix[row][col] != map.empty_char)
		return (current);
	ft_prepare_square(&current, best);
	while (1)
	{
		current.size++;
		if (!check_square(map, current))
		{
			current.size--;
			break ;
		}
	}
	return (current);
}

int	check_square(t_map map, t_square square)
{
	int	row;
	int	col;
	int	limit_row;
	int	limit_col;

	if (square.size <= 0)
		return (0);
	limit_row = square.row + square.size;
	limit_col = square.col + square.size;
	if (limit_row > map.rows || limit_col > map.cols)
		return (0);
	row = square.row;
	while (row < limit_row)
	{
		col = square.col;
		while (col < limit_col)
		{
			if (map.matrix[row][col] != map.empty_char)
				return (0);
			col++;
		}
		row++;
	}
	return (1);
}

t_map	fill_square(t_map map, t_square square)
{
	int	row;
	int	col;

	if (!map.matrix || square.size <= 0)
		return (map);
	row = square.row;
	while (row < square.row + square.size)
	{
		col = square.col;
		while (col < square.col + square.size)
		{
			map.matrix[row][col] = map.full_char;
			col++;
		}
		row++;
	}
	return (map);
}

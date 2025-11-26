/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaheri <mtaheri@student.42istanbul.com.tr>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 07:36:05 by mtaheri           #+#    #+#             */
/*   Updated: 2025/11/26 21:47:38 by mtaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

static void	ft_free_map(t_map map)
{
	int	i;

	if (!map.matrix)
		return ;
	i = 0;
	while (map.matrix[i])
	{
		free(map.matrix[i]);
		i++;
	}
	free(map.matrix);
}

static void	ft_print_solution(t_map *map)
{
	int	row;

	row = 0;
	if (!map->matrix)
		return ;
	while (map->matrix[row])
	{
		ft_putstr(map->matrix[row]);
		row++;
	}
}

int	init(int has_file, char *path)
{
	t_map	map;

	map = ft_get_map(has_file, path);
	if (map.is_valid <= 0 || !map.matrix)
	{
		write(1, "map error\n", 10);
		ft_free_map(map);
		return (0);
	}
	map = ft_solver(map);
	ft_print_solution(&map);
	ft_free_map(map);
	return (1);
}

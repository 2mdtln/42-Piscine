/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix_size.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaheri <mtaheri@student.42istanbul.com.tr>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 07:36:14 by mtaheri           #+#    #+#             */
/*   Updated: 2025/11/26 07:36:15 by mtaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int	x_size(char **matrix)
{
	int	count;

	if (!matrix)
		return (0);
	count = 0;
	while (matrix[count])
		count++;
	return (count);
}

int	y_size(char **matrix)
{
	int	length;

	if (!matrix || !matrix[0])
		return (0);
	length = 0;
	while (matrix[0][length])
		length++;
	return (length);
}

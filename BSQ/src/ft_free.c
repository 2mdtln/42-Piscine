/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaheri <mtaheri@student.42istanbul.com.tr>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 07:35:59 by mtaheri           #+#    #+#             */
/*   Updated: 2025/11/26 23:00:12 by mtaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	ft_free(char **array_map)
{
	int	i;

	if (!array_map)
		return ;
	i = 0;
	while (array_map[i])
	{
		free(array_map[i]);
		i++;
	}
	free(array_map);
}

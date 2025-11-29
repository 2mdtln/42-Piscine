/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_copy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaheri <mtaheri@student.42istanbul.com.tr>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 07:35:56 by mtaheri           #+#    #+#             */
/*   Updated: 2025/11/26 07:35:57 by mtaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

static void	ft_clear_copy(char **array, int used)
{
	int	i;

	i = 0;
	while (i < used)
	{
		free(array[i]);
		i++;
	}
	free(array);
}

char	**ft_copy(char **array_map)
{
	char	**result;
	int		count;
	int		i;

	if (!array_map)
		return (NULL);
	count = 0;
	while (array_map[count])
		count++;
	result = malloc(sizeof(char *) * (count + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (i < count)
	{
		result[i] = ft_strdup(array_map[i]);
		if (!result[i])
		{
			ft_clear_copy(result, i);
			return (NULL);
		}
		i++;
	}
	result[count] = NULL;
	return (result);
}

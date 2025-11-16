/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmbasar <ahmbasar@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 19:49:32 by ahmbasar          #+#    #+#             */
/*   Updated: 2025/11/16 19:53:03 by ahmbasar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define SIZE 4

#define SUCCESS 1
#define FAIL 0

int	check_dup(char c1, char c2, char c3, char c4)
{
	return (c1 == c2 || c1 == c3 || c1 == c4 || \
			c2 == c3 || c2 == c4 || c3 == c4);
}

int	get_view(char a, char b, char c, char d)
{
	char	best;
	int		view;

	view = 1;
	best = a;
	if (best < b)
	{
		best = b;
		view++;
	}
	if (best < c)
	{
		best = c;
		view++;
	}
	if (best < d)
		view++;
	return (view + '0');
}

int	check(char (*surround)[4][SIZE], char (*map)[SIZE][SIZE])
{
	int	i;

	i = -1;
	while (++i < SIZE)
	{
		if (check_dup((*map)[0][i], (*map)[1][i], (*map)[2][i], (*map)[3][i]))
			return (FAIL);
		if (get_view((*map)[i][0], (*map)[i][1], (*map)[i][2], (*map)[i][3]) !=
			(*surround)[2][i])
			return (FAIL);
		if (get_view((*map)[i][3], (*map)[i][2], (*map)[i][1], (*map)[i][0]) !=
			(*surround)[3][i])
			return (FAIL);
		if (get_view((*map)[0][i], (*map)[1][i], (*map)[2][i], (*map)[3][i]) !=
			(*surround)[0][i])
			return (FAIL);
		if (get_view((*map)[3][i], (*map)[2][i], (*map)[1][i], (*map)[0][i]) !=
			(*surround)[1][i])
			return (FAIL);
	}
	return (SUCCESS);
}

// void	s_map(char (*map)[SIZE][SIZE])
// {
// 	// (*map)[0][0] = 1;
// 	// (*map)[0][1] = 2;
// 	// (*map)[0][2] = 3;
// 	// (*map)[0][3] = 4;
// 	// (*map)[1][0] = 2;
// 	// (*map)[1][1] = 3;
// 	// (*map)[1][2] = 4;
// 	// (*map)[1][3] = 1;
// 	// (*map)[2][0] = 3;
// 	// (*map)[2][1] = 4;
// 	// (*map)[2][2] = 1;
// 	// (*map)[2][3] = 2;
// 	// (*map)[3][0] = 4;
// 	// (*map)[3][1] = 1;
// 	// (*map)[3][2] = 2;
// 	// (*map)[3][3] = 3;
// }

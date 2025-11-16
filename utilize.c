/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilize.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmbasar <ahmbasar@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 15:41:05 by ahmbasar          #+#    #+#             */
/*   Updated: 2025/11/16 20:41:09 by ahmbasar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define SIZE		4
#define SURROUND	16
#define AREA		16
#define SUCCESS 1
#define FAIL 0

void	p_map(char (*map)[SIZE][SIZE])
{
	int	i;

	i = 0;
	while (i < AREA)
	{
		if (((i % SIZE) == 0) && i)
			write(1, "\n", 1);
		write(1, &(*map)[i / SIZE][i % SIZE], 1);
		if ((i % SIZE) != 3)
			write(1, " ", 1);
		i++;
	}
	write(1, "\n", 1);
}

int	check_dup_y(char c1, char c2, char c3, char c4)
{
	return (c1 == c2 || c1 == c3 || c1 == c4 || \
			c2 == c3 || c2 == c4 || c3 == c4);
}

int	get_view(char a, char b, char c, char d)
{
	char	best;
	int		views;

	views = 1;
	best = a;
	if (best < b)
	{
		best = b;
		views++;
	}
	if (best < c)
	{
		best = c;
		views++;
	}
	if (best < d)
		views++;
	return (views + '0');
}

int	check(char (*surround)[4][SIZE], char (*map)[SIZE][SIZE])
{
	int	i;

	i = -1;
	while (++i < SIZE)
	{
		if (check_dup_y((*map)[0][i], (*map)[1][i], (*map)[2][i], (*map)[3][i]))
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

// void	p_surround(char (*arr)[4][SIZE])
// {
// 	for (int i = 0; i < SURROUND; i++)
// 	{
// 		printf("-%d- ", (*arr)[i / SIZE][i % SIZE] - '0');
// 		if ((i % SIZE) == 3)
// 			printf("\n");
// 	}
// 	printf("\n");
// }

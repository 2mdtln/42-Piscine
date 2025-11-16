/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilize.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmbasar <ahmbasar@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 15:41:05 by ahmbasar          #+#    #+#             */
/*   Updated: 2025/11/16 19:55:16 by ahmbasar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define SIZE		4
#define SURROUND	16
#define AREA		16

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

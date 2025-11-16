/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmbasar <ahmbasar@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 15:41:06 by ahmbasar          #+#    #+#             */
/*   Updated: 2025/11/16 20:58:03 by ahmbasar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define SIZE		4
#define SURROUND	16

#define PERM_DIM	24

#define SUCCESS 0
#define FAIL 1

void	p_surround(char (*arr)[4][SIZE]);
void	p_map(char (*map)[SIZE][SIZE]);
int		check(char (*surround)[4][SIZE], char (*map)[SIZE][SIZE]);

static const char	g_perms[PERM_DIM][SIZE] = {\
	"1234", "2134", "3124", "1324", "2314", "3214", "3241", "2341", \
	"4321", "3421", "2431", "4231", "4132", "1432", "3412", "4312", \
	"1342", "3142", "2143", "1243", "4213", "2413", "1423", "4123" \
	};

int	init_arg(char (*arr)[4][SIZE], char *str)
{
	int	str_index;
	int	num_index;

	str_index = 0;
	while (str[str_index])
	{
		num_index = str_index / 2;
		if ((str_index % 2) == 0)
		{
			if (str[str_index] < '1' || str[str_index] > '4')
				return (FAIL);
			(*arr)[num_index / SIZE][num_index % SIZE] = str[str_index];
		}
		else
			if (str[str_index] != ' ')
				return (FAIL);
		str_index++;
	}
	if (str_index != (32 - 1))
		return (FAIL);
	return (SUCCESS);
}

void	set_row(char const *perm, char *row)
{
	int	i;

	i = -1;
	while (++i < 4)
		row[i] = perm[i];
}

int	combinator(int max_24[4], char (*map)[SIZE][SIZE], char (*arr)[4][SIZE])
{
	while (max_24[0] < PERM_DIM)
	{
		max_24[1] = 0;
		set_row(g_perms[max_24[0]], (*map)[0]);
		while (max_24[1] < PERM_DIM)
		{
			max_24[2] = 0;
			set_row(g_perms[max_24[1]], (*map)[1]);
			while (max_24[2] < PERM_DIM)
			{
				max_24[3] = 0;
				set_row(g_perms[max_24[2]], (*map)[2]);
				while (max_24[3] < PERM_DIM)
				{
					set_row(g_perms[max_24[3]++], (*map)[3]);
					if (check(arr, map))
						return (SUCCESS);
				}
				max_24[2]++;
			}
			max_24[1]++;
		}
		max_24[0]++;
	}
	return (FAIL);
}

int	main(int argc, char *argv[])
{
	char	arr[4][SIZE];
	char	map[SIZE][SIZE];

	if (argc != 2)
		return (write(2, "Error\n", 6));
	if (init_arg(&arr, argv[1]))
		return (write(2, "Error\n", 6));
	if (combinator((int [4]){0, 0, 0, 0}, &map, &arr))
		return (write(2, "Error\n", 6));
	p_map(&map);
	return (0);
}

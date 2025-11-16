/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmbasar <ahmbasar@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 15:41:06 by ahmbasar          #+#    #+#             */
/*   Updated: 2025/11/16 18:20:37 by ahmbasar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define SIZE		4
#define SURROUND	(SIZE) * 4 // define ici define norm

#define PERM_DIM	24

void	p_surround(char (*arr)[4][SIZE]);
void	p_map(char (*map)[SIZE][SIZE]);
int		check(char (*surround)[4][SIZE], char (*map)[SIZE][SIZE]);

const char	perms[PERM_DIM][SIZE] = { \
	"1234","2134", "3124", "1324", "2314", "3214", "3241", "2341", \
	"4321", "3421", "2431", "4231", "4132", "1432", "3412", "4312", \
	"1342", "3142", "2143", "1243", "4213", "2413", "1423", "4123" \
	};

void	init_arg(char (*arr)[4][SIZE], char *str)
{
	int	i;

	i = 0;
	while (i < SURROUND)
	{
		(*arr)[i / SIZE][i % SIZE] = str[i * 2];
		i++;
	}
}

void	set_row(char *perm, char *row)
{
	int	i;

	i = -1;
	while (++i < 4)
		row[i] = perm[i];
}

void	combinator(int ijkl[4], char (*map)[SIZE][SIZE], char (*arr)[4][SIZE])
{
	while (ijkl[0] < PERM_DIM)
	{
		ijkl[1] = 0;
		set_row(perms[ijkl[0]], (*map)[0]);
		while (ijkl[1] < PERM_DIM)
		{
			ijkl[2] = 0;
			set_row(perms[ijkl[1]], (*map)[1]);
			while (ijkl[2] < PERM_DIM)
			{
				ijkl[3] = 0;
				set_row(perms[ijkl[2]], (*map)[2]);
				while (ijkl[3] < PERM_DIM)
				{
					set_row(perms[ijkl[3]], (*map)[3]);
					// p_map(map);
					if (check(arr, map))
						return ;
					ijkl[3]++;
				}
				ijkl[2]++;
			}
			ijkl[1]++;
		}
		ijkl[0]++;
	}
}


int	main(int argc, char *argv[])
{
	char	arr[4][SIZE];
	char	map[SIZE][SIZE];

	if (argc != 2)
		return (write(2, "Error\n", 6));
	init_arg(arr, argv[1]);
	p_surround(arr);
	combinator((int [4]){0, 0, 0, 0}, map, arr);
	p_map(map);
	return (0);
}

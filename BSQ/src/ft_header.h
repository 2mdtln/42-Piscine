/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaheri <mtaheri@student.42istanbul.com.tr>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 07:36:03 by mtaheri           #+#    #+#             */
/*   Updated: 2025/11/26 23:10:42 by mtaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

typedef struct s_map
{
	char	empty_char;
	char	block_char;
	char	full_char;
	int		rows;
	int		cols;
	int		is_valid;
	char	**matrix;
}	t_map;

typedef struct s_square
{
	int	row;
	int	col;
	int	size;
}	t_square;

# define STDIN_CHUNK 4096

int			init(int has_file, char *path);
char		**ft_split(char *content);

t_map		ft_get_map(int has_file, char *path);

int			ft_is_map_valid(char **array_map, t_map map);
int			ft_check_map_line_value(char **array_map, t_map map);
int			ft_check_map_line_len(char **array_map);

t_map		ft_solver(t_map map);
t_square	find_square(t_map map, t_square square, int x_start, int y_start);
int			check_square(t_map map, t_square square);
t_map		fill_square(t_map map, t_square square);

int			x_size(char **matrix);
int			y_size(char **matrix);

void		ft_free(char **dict);

char		**ft_read_file(char *pathmap);
char		**ft_read_stdin(void);
char		*ft_load_file(char *pathmap);
int			ft_get_file_size(char *pathmap, int *file);

int			ft_strlen(char *str);
int			ft_strprintable_len(char *str);
char		*ft_strdup(char *src);
int			ft_atoi(char *str);
char		**ft_copy(char **array_map);
void		ft_putstr(char *str);
void		ft_putchar(char c);

#endif

#include <unistd.h>
#define SIZE 4

const char *heights = "1234";
int check_dup(char c1, char c2, char c3, char c4){
	return (c1 == c2 || c1 == c3 || c1 == c4 || \
			c2 == c3 || c2 == c4 || c3 == c4);
}

int	get_view(char seg[4])
{
	char	best;
	int		view;

	view = 1;
	best = seg[0];
	if (best < seg[1])
	{
		best = seg[1];
		view++;
	}
	if (best < seg[2])
	{
		best = seg[2];
		view++;
	}
	if (best < seg[3])
		view++;
	return (view);
}

int	check(char (*surround)[4][SIZE], char (*map)[SIZE][SIZE])
{
	int i;
	
	/*Check columns do not contain duplicates.*/
	i = -1;
	while (++i < SIZE){ // i => column
		if (check_dup((*map)[0][i], (*map)[1][i], \
						(*map)[2][i], (*map)[3][i]))
						return (0);
	/*check if rows are compatible with surround*/
		if (get_view((char [4]){(*map)[i][0], (*map)[i][1], (*map)[i][2], (*map)[i][3]}) != (*surround)[2][i])
			return (0);
		if (get_view((char [4]){(*map)[i][3], (*map)[i][2], (*map)[i][1], (*map)[i][0]}) != (*surround)[3][i])
			return (0);
	/*check if columns are compatible with surround*/
		if (get_view((char [4]){(*map)[0][i], (*map)[1][i], (*map)[2][i], (*map)[3][i]}) != (*surround)[0][i])
			return (0);
		if (get_view((char [4]){(*map)[3][i], (*map)[2][i], (*map)[1][i], (*map)[0][i]}) != (*surround)[1][i])
			return (0);
	}
	return (1); /* succes */
}



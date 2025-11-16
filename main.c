#include <unistd.h>

#define SIZE		4
#define SURROUND	(SIZE) * 4 // define ici define norm

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

// void	prepare()

void	p(char (*arr)[4][SIZE]){
	for (size_t i = 0; i < SURROUND; i++)
	{
		printf("-%d- ", (*arr)[i / SIZE][i % SIZE] - '0');
		if ((i % SIZE) == 3)
			printf("\n");
	}
	printf("\n");
	
}

int	main(int argc, char *argv[])
{
	char	arr[4][SIZE];
	char	map[SIZE][SIZE];
	
	if (argc != 2)
		return (write(2, "Error\n", 6));
	init_arg(arr, argv[1]);
	p(arr);
	// prepare();
	return (0);
}

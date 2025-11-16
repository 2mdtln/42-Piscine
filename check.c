#include <unistd.h>
#define SIZE 4

int	check(char surround[4][SIZE], char map[SIZE][SIZE]){
	/*Check columns do not contain duplicates.*/
	
	/*check if rows are correct with surround*/

	/*check if columns are correct with surround*/
}

int	main(int argc, char **argv){
	char perms[24][4] = {"1234","2134", "3124",
"1324", "2314", "3214", "3241", "2341", "4321",
"3421", "2431", "4231", "4132", "1432", 
"3412", "4312", "1342", "3142", "2143",
"1243", "4213", "2413", "1423", "4123"};
	char surround[4][SIZE];
	for (int i=0; i<SIZE*4;i++){
		surround[i/SIZE][i%SIZE]=argv[2*i];
	}
}
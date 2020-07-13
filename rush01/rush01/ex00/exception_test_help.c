#include <stdio.h>

int	check_grid(int grid[][4], int *views);
int atoi(char argv[]);

int	main(int argc, char *argv[])
{
	int grid[4][4] = {
		 {1,2,3,4},
		 {2,3,4,1},
		 {3,4,1,2},
		 {4,1,2,3}
		 };

	int wrong_grid[4][4] = {
		 {1,2,3,4},
		 {2,3,4,1},
		 {3,2,4,2},
		 {4,1,2,3}
		 };

	int len;
	len = 0;
	while(argv[1][len])
		len++;
	
	int views[16];
	int i;

	i = 0;
	while(i < 31)
	{
		if(argv[1][i] >= '1' && argv[1][i] <= '4')
		{
			views[i/2] = atoi(&argv[1][i]);
		//	printf("i %d views[%d] %d\n", i, i/2, views[i/2]);
			i++;
		}
		else if(i%2 == 0 && argv[1][i] == 32)
		{
			printf("error");
			return (0);
		}
		else if(argv[1][i] == 32)
			i++;
		else
		{
			printf("error");
			return (0);
		}
	
	}

	printf("%d", check_grid(grid, views));
	printf("%d", check_grid(wrong_grid, views));
}

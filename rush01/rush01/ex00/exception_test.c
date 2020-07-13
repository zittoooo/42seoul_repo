#include <stdio.h>

int	check_grid(int grid[][4], int *views);
int atoi(char argv[]);
int Printlen(char argv[]);
int except(char argv[]);

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

	int len = Printlen(argv[1]);
/*
	if(len <= 0 || len > 31) 
	{
		printf("len error");
		return (0);
	}
*/
	int views[16];
	fun(view);
	
	if(except(argv[1]))
	{
		printf("ok");
		//printf("%d", check_grid(grid, views));
		return (0);
	}

	return (0);
}	

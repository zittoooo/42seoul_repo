#include <stdio.h>

void 	create_rows(int rows[24][4]);
void 	set_grid_from_rowset(int grid[4][4], int rows[24][4], int rowse[4]);
void	print_grid(int	grid[4][4]);
int		check_grid(int	grid[4][4]);
int		generate_grid(int views[16]);

int	main(void){
	printf("TESTING set_grid_from_rows");
	int rows[24][4];
	int	grid[4][4];
	int rowset[4] = {1,2,3,4};
	create_rows(rows);
	set_grid_from_rowset(grid, rows, rowset);
	print_grid(grid);

	printf("TESTING generate_grid");
	
	int views[16] = {4,3,2,1,1,2,2,2,4,3,2,1,1,2,2,2};	
	generate_grid(views);
	printf("\n");
	
	int views2[16] = {4,1,2,2,1,4,2,2,2,3,2,1,3,1,2,2};
	generate_grid(views2);
	printf("\n");

	int views3[16] = {2,2,4,1,2,2,1,4,3,2,1,2,1,2,3,2};
	generate_grid(views3);

	int bad_views[16] = {2,2,1,4,2,2,1,4,3,2,1,2,1,2,3,2};
	generate_grid(bad_views);
}

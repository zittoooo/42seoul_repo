#include <stdio.h>

void	create_rows(int rows[24][4]);

int	row_contains_int_before_i(int num, int i, int row[4]);

int	main(void)
{
	// TESTING row_contains_int_before_i
	int row[4];
	int num;

	num = 2;
	row[0] = 1;
	row[1] = 2;
	printf("%d should be 1 \n", row_contains_int_before_i(num, 1, row));

	printf("%d should be 0 \n", row_contains_int_before_i(num, 0, row));

	// TESTING create_rows
	int rows[24][4];
	create_rows(rows);
	for(int i = 0; i < 24; i++)
	{
		printf("%d %d %d %d \n", rows[i][0],rows[i][1],rows[i][2],rows[i][3]); 
	}
}

#include <stdio.h>

int     check_row(int view, int row[4]);

int	main(void)
{
	int row1[4] = {1, 2, 3, 4};
	int row2[4] = {2, 3, 1, 4};
	int row3[4] = {4, 2, 3, 1};
	int row4[4] = {2, 4, 3, 1};
	int row5[4] = {2, 4, 3, 1};
	printf("%d", check_row(4, row1));
	printf("%d", check_row(3, row2));
	printf("%d", check_row(1, row3));
	printf("%d", check_row(2, row4));
	printf("%d", check_row(3, row4));
}
 

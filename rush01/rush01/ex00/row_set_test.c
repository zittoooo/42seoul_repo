#include <stdio.h>

int **row_set(void);

int main()
{
	int (*rows)[4]; row_set();
	

	printf("%d ", (*rows)[0]); // 4
	printf("%d ", *rows[1]); // 3
	//printf("%d ", rows[23][2]); // 2
	//printf("%d ", rows[23][3]); // 1
}


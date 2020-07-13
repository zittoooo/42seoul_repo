#include <stdio.h>

void convert_args(int views[16], char str[]);

int main(int argc, char *argv[])
{
	int	views[16];
	char	str[] = "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2";
	convert_args(views, argv[1]);
	for(int i = 0; i < 16; i++)
	{
		printf("[%d],", views[i]);
	}
}

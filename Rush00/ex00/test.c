#include <unistd.h>

int		rush(int x, int y);

int rush(int x, int y)
{
	int i=0, j=0;
	
	while(j < y)
	{
		i = 0;
		while(i < x)
		{
			if( (i == 0 | i == x-1) && ( j == 0 | j == y-1) )
			{
				write(1, "o", 1);
				i++;
			}

			else if( (j == 0  | j == y-1)   && ( i != 0 | i != x-1 ))
			{
				write(1, "-", 1); 
				i++;
			}

			else if( (j != 0 | j != y-1) && ( i == 0 | i == x-1) )
			{
				write(1, "|", 1);
				i++;			
			}

			else
			{ 
				write(1, " ", 1);
				i++;
			}
		}

		j++;
		write(1, "\n", 1);	
	}

	return (0);
}

int main()
{
	rush(1,5);
	return (0);
}

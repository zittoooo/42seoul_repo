#include "func.h"


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
				ft_putchar('o');
				i++;
			}
			else if( (j == 0  | j == y-1)  && ( i != 0 | i != x-1 ))
			{
				ft_putchar('-'); 
				i++;
			}
			else if( (j != 0 | j != y-1) && ( i == 0 | i == x-1) )
			{
				ft_putchar('|');
				i++;			
			}
			else
			{ 
				ft_putchar(' ');
				i++;
			}
		}
		j++;
		ft_putchar('\n');	
	}
	return (0);
}

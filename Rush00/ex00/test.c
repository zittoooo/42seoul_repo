#include <unistd.h>

int		rush(int x, int y);
void	ft_putchar(char c);

void ft_putchar(char c)
{
	write(1, &c, 1);
}

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
		write(1, "\n", 1);	
	}
	return (0);
}

int main()
{
	rush(1,5);
	return (0);
}

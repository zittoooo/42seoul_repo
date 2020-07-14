#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	if(nb <= 0)
		return (0);
	if(nb == 1)
		return (1);
	else
	{
		int count = 1;
		nb *= count;
	}
	return (nb * ft_iterative_factorial(nb - 1));
}

int main()
{
	printf("%d", ft_iterative_factorial(-5));
}

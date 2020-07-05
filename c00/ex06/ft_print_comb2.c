#include <unistd.h>

void	ft_print_comb2(void)
{
	char i;
	char j;

	i = '0';
	
	while (i <= '9')
	{
		j = i + 1;
		while (j <= '9')
		{
			write(1, &i, 1);
			write(1, &j, 1);
			j++;
			write(1, ", ",2);
		}
		i++;
	}


}

int main(void)
{
	ft_print_comb2();

	return (0);
}


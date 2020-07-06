#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int tmp[size];
	int i = 0;
	int j = size;

	while(i < size)
	{
		tmp[i] = tab[j];
		i++;
		j--;
	}
	
	i = 0;
	j = size;
	while(i < size)
	{
		tab[i] = tmp[j];
		i++;
		j--;
	}

}


int main()
{
	int arr[6] = {1, 2, 3, 4, 5, 6};
	ft_rev_int_tab(arr, 6);
	for(int i = 0 ; i < 6 ; i++)
	{
		printf("%d ", arr[i]);    // 1에쓰레기값
	}
}

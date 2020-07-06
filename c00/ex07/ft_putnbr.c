#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb > 10)
	{	
		int tmp[10];
	    int i;
		int arr[10];
		int j;
		int count;

		count = 0;
		i = 0;
	
		while(i < 10)
		{
			if(nb == 0)
			{
				break;
			}
			else
		   	{
			tmp[i] = nb % 10;
			nb /= 10;			
			i++;
			count++;  // 몇자리수인가
			}
		}
		
		i = 0;
		j = count - 1;	
		while(i < count)
		{
			arr[i] = tmp[j];
			ft_putchar(arr[i] + 48);
			i++;
			j--;
		}
	}

	else if (nb < 0)  // 음수
	{
			
		int tmp[10];
	    int i;
		int arr[10];
		int j;
		int count;

		count = 0;
		i = 0;

		nb *= -1;  // 양수로 바꾸기  
		
		/*
		// -2147483648 예외처리해주기ㅠ
		if(예외)
		{
			arr[i] = 2
				
		
		}

		*/

		printf("%d\n", nb);
		while(i < 10)
		{
			if(nb == 0)
			{
				break;
			}
			else
		   	{
			tmp[i] = nb % 10;
			nb /= 10;			
			i++;
			count++;  // 몇자리수인가
			}
		}
		
		i = 0;
		j = count - 1;
		
		//ft_putchar('-');	
		while(i < count)
		{
			arr[i] = tmp[j];
			ft_putchar(arr[i] + 48);
			i++;
			j--;
		}
	
	}

	else 
		ft_putchar(nb + 48);		
}

int		main(void)
{
	ft_putnbr(-2147483648);
	return (0);
}

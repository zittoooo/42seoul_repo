#include <stdio.h>
#include <unistd.h>

int		ft_strlen(char *str)
{
	int count ;

	count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return count;
}

int		main()
{
	char arr[] = "ab c&d";
	int i = ft_strlen(arr);
	printf("%d", i);
}

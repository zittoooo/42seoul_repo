#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	while(n)
	{
		dest[i] = src[i];
		i++;
		n--;
	}

	return dest;
}

int		main()
{
	char dest[5] = "";
	char str[10] = {'a', 'b', 'c', 'd'};
		
	ft_strncpy(dest, str, 5);


	char dest[5] = "";
	char str2[10] = {'a', 'b', 'c', 'd'};

	strncpy(dest2, str2, 5);
	
	printf(" strncpy : %s\n", dest2);

	printf("ft_strncpy: %s\n", dest);
}

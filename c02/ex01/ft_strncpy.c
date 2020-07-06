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
	char str[] = {'a', 'b', 'c', 'd', 'f' };
		
	ft_strncpy(dest, str, 5);


	char dest2[5] = "";
	char str2[] = {'a', 'b', 'c', 'd', 'f' };

	strncpy(dest2, str2, 5);
	
	printf(" strncpy : %s\n", dest2);

	printf("ft_strncpy: %s\n", dest);
}

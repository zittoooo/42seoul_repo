#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int i = 0;
	int j = 0;

	while(dest[i] != '\0')
	{
		i++;
	}

	while(src[j] != '\0' && nb-- > 0)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	*dest = '\0';
	return (dest);
}

int main()
{

}

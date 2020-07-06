#include <stdio.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int i;
	
	i = 0;
	while(*src)
	{
		dest[i] = src[i];
		i++;
	}

	return dest;
}

int main()
{
	char s1[] = "abcd";
	char s2[4] = "";

	ft_strcpy(s2, s1);

	printf("%s\n", s2);
	return 0;
}


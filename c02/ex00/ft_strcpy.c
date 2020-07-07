#include <stdio.h>
#include <stdio.h>
#include <string.h>
char	*ft_strcpy(char *dest, char *src)
{
	int i;
	
	i = 0;
	while(src[i])
	{
		dest[i] = src[i];
		i++;
	}
		
	dest[i] = '\0';
	return dest;
}

int main()
{
	char s1[5] = "abcd";
	char s2[5] = "";

	ft_strcpy(s2, s1);

	printf("ft_strcpy : %s\n", s2);

	char s3[5] = "abcd";
	char s4[10];

	strcpy(s4, s3);
	printf("strcpy : %s\n", s4);


	return 0;
}


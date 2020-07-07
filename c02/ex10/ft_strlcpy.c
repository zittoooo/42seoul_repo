#include <stdio.h>
#include <string.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
		int i;
		
		i = 0;

		while (i < size-1)
		{
			dest[i] = src[i];
			i++;
		}

		dest[size-1] = '\0';

		return 0;
}

int main()
{
	char str1[] = "";
	char str2[] = "abcd";

	ft_strlcpy(str1, str2, 4);   // abc\0
	printf("%s", str1);
}

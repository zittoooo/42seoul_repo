char	*ft_strcat(char *dest, char *src)
{
	char *ret = dest;
	int i = 0;
	int j = 0;

	while(src[i] != '\0')
	{
		i++;
	}
	while(dest[j] != '\0')
	{
		dest++;
	}

	while(i-- > 0)
	{
		*dest++ = *src++;
	}
	*dest = '\0';

	return (ret);
}
#include <stdio.h>
int 	main()
{
	char s1[] = "1234";
	char s2[] = "avd";

	ft_strcat(s1, s2);
	printf("%s", s1);
	return (0);
}

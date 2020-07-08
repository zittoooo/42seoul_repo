#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
			i++;
		}
		else
			i++;	
	}
	return str;
}

int		main(void)
{
	char str1[5] = "ABCD";
	char *str2 = "";

	str2 = ft_strlowcase(str1);	
	printf("%s", str2);
}

#include <stdio.h>

char	*ft_strlowcase(char * str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
			i++;
		}
		else 
			i++;
	}
	str[i] = '\0';

	return (str);
}

int main()

{

	char str[] = "asdf qWeRtY ZXCV";

	printf("%s", ft_strlowcase(str));

	 return(0);

}

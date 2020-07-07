#include <stdio.h>
#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int i;
	i = 0;

	while(str[i])
	{
		if(str[i] >= 'a' && str[i] <= 'z' )  // a~z
		{
			str[i] -= 32;
			i++;
		}
		else
			i++;
	}		
	return str;
}

int main()
{
	char str[5] = "abcD";
	char *str1 = "" ;
	str1 = ft_strupcase(str);
	printf("%s", str1);

}

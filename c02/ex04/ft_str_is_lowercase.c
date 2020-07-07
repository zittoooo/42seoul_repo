#include <stdio.h>
#include <unistd.h>
 //////////
int		ft_str_is_lowercase(char *str)
{
	if(*str == '\0')
		return 1;

	while(*str++)
	{
		if (*str <= 97 && *str >= 122)  // exclud a ~ z 
		{
			break;
			return 0;
		}
		else
			return 0;
	}
	return 1;
}

int main(void)
{
	char *str1 = "abcd"; // 1
	char *str2 = "Abcd"; // 0
	char *str3 = "1234"; // 0
	char *str4 = "";    // 1

	int res1 = ft_str_is_lowercase(str1);
	int res2 = ft_str_is_lowercase(str2);
	int res3 = ft_str_is_lowercase(str3);
	int res4 = ft_str_is_lowercase(str4);

	printf("%d %d %d %d",res1, res2, res3, res4);

	return (0);
}

#include <stdio.h>
#include <unistd.h>

int		ft_str_is_numeric(char *str)
{
	if(*str == '\0')  // empty
		return 1;

	while(*str++)
	{
		if(*str > 48 && *str < 57 )   // number
			return 1;
		else
			return 0;
	}

	return 1;
}

int main(void)
{
	char *str1 = "1234";  // 1
	char *str2 = "ab12";  // 0
	char *str3 = "adbe";  // 0
	char *str4 = "";  //1

	int res1 = ft_str_is_numeric(str1);
	int res2 = ft_str_is_numeric(str2);
	int res3 = ft_str_is_numeric(str3);
	int res4 = ft_str_is_numeric(str4);

	printf("%d %d %d %d",res1, res2, res3, res4);

	return (0);
}

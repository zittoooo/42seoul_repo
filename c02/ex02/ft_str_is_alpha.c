#include <stdio.h>
#include <unistd.h>

int		ft_str_is_alpha(char *str)
{
	if (str[0] == '\0') // empty
		return 1;

	while(*str++)
	{
		if (*str >= 65 && *str <= 90)   // A~Z
			return 1;

		else if (*str >= 97 && *str <= 122)  // a~z
			return 1;
		else 
			return 0;

	}

	return -1;
}

int		main(void)
{
	char *str1 = "@i@";
	char *str2 = "1234";
	char *str3 = "";
	int res1 = ft_str_is_alpha(str1);  // 1
	int res2 = ft_str_is_alpha(str2);  // 0
	int res3 = ft_str_is_alpha(str3);  // 1
	printf("%d %d %d", res1, res2, res3);
	return 0;
}

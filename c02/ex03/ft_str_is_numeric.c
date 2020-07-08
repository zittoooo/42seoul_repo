#include <stdio.h>
#include <unistd.h>

int		ft_str_is_numeric(char *str)
{
	int res;
	int i;

	i = 0;
	res = 0;

	if(*str == '\0')  // empty
		return 1;

	while(str[i])
	{
		if(str[i] >= 48 && str[i] <= 57 )   // number
		{
			res++;			
			i++;
		}
		else
			i++;
	}

	if(res == i)
		return 1;
	else
		return 0;
}

int main(void)
{
	char str1[] = "1234";  // 1
	char str2[] = "ab12";  // 0
	char str3[] = "adbe";  // 0
	char str4[] = "12ab";  // 0  /*******/
	char str5[] = "";  //1

	int res1 = ft_str_is_numeric(str1);
	int res2 = ft_str_is_numeric(str2);
	int res3 = ft_str_is_numeric(str3);
	int res4 = ft_str_is_numeric(str4);
	int res5 = ft_str_is_numeric(str5);
	printf("%d %d %d %d %d",res1, res2, res3, res4, res5);

	return (0);
}

#include <stdio.h>
#include <unistd.h>

int		ft_str_is_uppercase(char *str)
{
	int i;
	int res;

	i = 0;
	res = 0;

	if(str[0]=='\0')
		return 1;

	while(str[i])
	{
		if(str[i] >= 65 && str[i] <= 90)  // A~Z
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

int main()
{
	char *str = "";
	printf("%d", ft_str_is_uppercase(str));

}

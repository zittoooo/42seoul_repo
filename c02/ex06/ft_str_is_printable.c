#include <stdio.h>
#include <unistd.h>

int		ft_str_is_printable(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;

	if(str[0] == '\0')
		return 1;

	while(str[i])
	{
		if(str[i] >= 33 && str[i] <= 127)
		{
			count++;
			i++;
		}
		else
			i++;
	}

	if(count == i)
		return 1;
	else
		return 0;
}


int		main(void)
{
	char *c;
	printf("%d", ft_str_is_printable(c));
	return (0);
}


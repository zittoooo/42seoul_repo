#include <stdio.h>

void		is_lower(char *str, int *i, int *j)
{
	if (str[*i] >= 'a' && str[*i] <= 'z')
	{
		(*i)++;
		(*j)++;
	}	
}

char		*ft_strcapitalize(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[j])
	{
		if(i == 0){
			is_lower(&str[j], &i, &j);

			if(str[j] >= 'A' && str[j] <= 'Z')
			{
				i++;
				j++;
			}
			else if(str[j] >= 48 && str[j] <= 57 )
			{
				i++;
				j++;
			}

			else
			{
				j++;
				i = 0;
			}
		}
		else
		{
			
			if (str[j] >= 'A' && str[j] <= 'Z')
			{
				str[j] += 32;
				i++;
				j++;
			}

			else if (str[j] >= 'a' && str[j] <= 'z')
			{
				i++;
				j++;
			}
			else if(str[j] >= 48 && str[j] <= 57)
			{
				i++;
				j++;
			}
			else
			{
				j++;
				i = 0;
			}

		}
	}
	return str;
}

int main(void)
{
	char str1[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char *str2 = "";

	str2 = ft_strcapitalize(str1);
	printf("%s", str2);
}

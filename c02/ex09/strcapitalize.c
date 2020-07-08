#include <stdio.h>
int		is_lower(char *str, int * i, int *j)
{
	if( *str >= 'a' && *str <= 'z')
	{
		(*i) += 1;
		(*j) += 1;
		return 1;
	}
	else 
		return 0;
}

int		is_upper(char *str , int *i, int*j)
{
	if(*str >= 'A' && *str <= 'Z')
	{
		(*i) += 1;
		(*j) += 1;
		return 1;
		
	}
	else
		return 0;
}

int		is_digit(char *str, int *i, int *j)
{
	if (*str >= 48 && *str <= 57)
	{
		(*i) += 1;
		(*j) += 1;
		return 1;
	}
	else 
		return 0;
}

char		*ft_strcapitalize(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[j])
	{
		if(i == 0)
		{
			if(is_lower(&str[j] , &i, &j))
				str[j] -= 32;
			is_upper(&str[j], &i, &j);
			is_digit(&str[j], &i, &j);
			
			if( !(is_lower(&str[j], &i, &j)) && !(is_upper(&str[j], &i ,&j)) && !(is_digit(&str[j], &i, &j)))
			{
				j++;
				i = 0;
			}
		}
		else
		{
			if(is_upper(&str[j], &i, &j))
			{str[j] += 32;}
			is_lower(&str[j], &i, &j);
				
			is_digit(&str[j], &i, &j);
		
			 if( !(is_lower(&str[j], &i, &j)) && !(is_upper(&str[j], &i ,&j)) && !(is_digit(&str[j], &i,     &j)))
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

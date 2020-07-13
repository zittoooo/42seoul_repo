#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	char *ptr;
	char *pfind;

	ptr = str;
	pfind = to_find;

	if (!*to_find)
		return (ptr);
	while (*ptr)
	{
		if (!*pfind)
		{
			return (ptr - (pfind - to_find));
		}
		if ( *ptr == *pfind)
			pfind++;
		else
			pfind = to_find;
		ptr++;
	}
	return (0);
}

int main()
{
	char s1[] = "A Garden Diary";
	char *ptr = ft_strstr(s1, "den");
	printf("%s\n", ptr);

}

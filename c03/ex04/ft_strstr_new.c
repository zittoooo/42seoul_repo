char	*ft_srtsrt(char *str, char *to_find)
{
	char *cp = str;
	char *s1, *s2;

	if(!*to_find)
		return (str);
	while(*cp)
	{
		s1 = cp;
		s2 = to_find;

		while(*s1 && *s2 && !(*s1 -*s2))
		{
			s1++;
			s2++;
		}
		if(!*s2) 
			return (cp);
		cp++;
	}
	char *nothing = NULL;
	return nothing;
}
#include <stdio.h>
int		main()
{
	char s1[30] = "A Carden Diary";
	char *ptr = ft_strstr(s1, "den");

	printf("%s\n", ptr);

}

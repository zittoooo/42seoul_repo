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

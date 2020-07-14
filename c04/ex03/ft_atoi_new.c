int		ft_atoi(char *str)
{
	int input;

	input = 1;
	while (*str != '\0')
	{
		if ((*str < '1' || *str > '9') && (*str == 32 || *str == '+'))
			str++;
		else if (*str == '-')
		{
			input *= -1;
			str++;
		}
		else
			break ;
	}
	*str = *str - '0';
	input *= *str;
	return (input);
}

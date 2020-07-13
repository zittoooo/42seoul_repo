int atoi(char argv[])
{
	if(*argv == '1')
		return (1);
	else if(*argv == '2')
		return (2);
	else if(*argv == '3')
		return(3);
	else if(*argv == '4')
		return (4);
	else
		return (0);
}

int		Printlen(const char argv[])
{
	int len;
	len = 0;
	while(argv[len] != '\0')
		len++;

	return len;
}

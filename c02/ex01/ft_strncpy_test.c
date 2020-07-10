char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char *ret;

	ret = dest;
	while (n > 0)
	{
		*dest++ = *src++;
		n--;
	}
	*dest = '\0';
	return (ret);
}

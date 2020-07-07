unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
		int i;
		
		i = 0;
		while (i < size-1)
		{
			dest[i] = src[i];
			i++;
		}

		dest[size-1] = '\0';

		return 0;
}

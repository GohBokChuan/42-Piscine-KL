#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	main(void)
{
	char	str1[] = "Hello";
	char	str2[] = "Hello World";
	char	str3[] = "";

	printf("Length of str1: %d\n", ft_strlen(str1));
	printf("Length of str2: %d\n", ft_strlen(str2));
	printf("Length of str3: %d\n", ft_strlen(str3));
	return (0);
}

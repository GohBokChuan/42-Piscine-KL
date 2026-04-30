#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
		    str[i] = str[i] - 32;
		}
		i++;
	}
    return (str);
}

int	main(void)
{
	char	str1[] = "hello there";
	char	str2[] = "hElLo ThErE";
	char	str3[] = "hello 123!";

	printf("str1 result: %s\n", ft_strupcase(str1));
	printf("str2 result: %s\n", ft_strupcase(str2));
	printf("str3 result: %s\n", ft_strupcase(str3));
	return (0);
}

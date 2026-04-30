#include <stdio.h>

char *ft_strlowcase(char *str)
{
    int i;
    
    i = 0;
    while(str[i] != '\0')
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i]=str[i] + 32;
        }
        i++;
    }
    return (str);
}

int main()
{
    char str1[]="HELLO THERE";
    char str2[]="No ThErE";
    
    printf("Result of str1 is:  %s\n",ft_strlowcase(str1));
	printf("REsult of str2 is:  %s\n",ft_strlowcase(str2));
    return 0;
}

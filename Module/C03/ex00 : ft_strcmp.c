#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
    int i;
    i = 0;
    
    while(s1[i] == s2[i] && s1[i] != '\0')
    {
        i++;
    }
    return (s1[i] - s2[i]);
}

int main() 
{
    char s1[] = "ABCDE";
    char s2[] = "ABCDEF";
    int result;
    result = ft_strcmp(s1, s2);
    
    printf("The result of the string compare between s1 and s2 is %d\n", result);
    return 0;
}

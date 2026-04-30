#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int i;
    i = 0;
    
    while(s1[i] == s2[i] && s1[i] != '\0' && i < n - 1)
    {
        i++;
    }
    return (s1[i] - s2[i]);
}

int main() 
{
    char s1[] = "ABCDE";
    char s2[] = "ABCDEF";
    int n = 6;
    int result;
    result = ft_strncmp(s1, s2, 6);
    
    printf("The result of the string compare between s1 and s2 is %d\n", result);
    return 0;
}

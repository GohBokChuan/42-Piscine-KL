#include <stdio.h>

int ft_str_is_printable(char *str)
{
    int i;
    i = 0;

    while (str[i] != '\0')
    {
        if (!(str[i] >= 32 && str[i] <= 126))
        {
            return (0);
        }
        i++;
    }
    return (1);
}

int main()
{
    char str1[] = "HELLO WoRlD";
    char str2[] = "H3LL0&^@$#";
    char str3[] = "'&^@$#";
    char str4[] = "\t";
    char str5[] = " ";
    
    
    printf("This string 1 result: %d\n", ft_str_is_printable(str1));
    printf("This string 2 result: %d\n", ft_str_is_printable(str2));
    printf("This string 3 result: %d\n", ft_str_is_printable(str3));
    printf("This string 4 result: %d\n", ft_str_is_printable(str4));
    printf("This string 5 result: %d\n", ft_str_is_printable(str5));
    
    return 0;
}

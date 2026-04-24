#include <stdio.h>

int ft_str_is_uppercase(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (!(str[i] >= 'A' && str[i] <= 'Z'))
        {
            return (0); 
        }
        i++;
    }
    return (1);
}

int main(void)
{
    char *str1 = "abcde";
    char *str2 = "A B C D E"; 
    char *str3 = "ABCDe0!?34578"; 
    char *str4 = "";
    char *str5 = "ABC";

    printf("Test 1 Result: %d\n", ft_str_is_uppercase(str1));
    printf("Test 2 Result: %d\n", ft_str_is_uppercase(str2));
    printf("Test 3 Result: %d\n", ft_str_is_uppercase(str3));
    printf("Test 4 Result: %d\n", ft_str_is_uppercase(str4));
    printf("Test 4 Result: %d\n", ft_str_is_uppercase(str5));

    return (0);
}

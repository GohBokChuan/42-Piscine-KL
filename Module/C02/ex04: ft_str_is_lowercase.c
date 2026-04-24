#include <stdio.h>

int ft_str_is_lowercase(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (!(str[i] >= 'a' && str[i] <= 'z'))
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
    char *str2 = "a b c D E"; 
    char *str3 = "abcde0!?34578"; 
    char *str4 = " "; 

    printf("Test 1 Result: %d\n", ft_str_is_lowercase(str1));
    printf("Test 2 Result: %d\n", ft_str_is_lowercase(str2));
    printf("Test 3 Result: %d\n", ft_str_is_lowercase(str3));
    printf("Test 4 Result: %d\n", ft_str_is_lowercase(str4));

    return (0);
}

#include <stdio.h>

int ft_str_is_numeric(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (!(str[i] >= '0' && str[i] <= '9'))
        {
            return (0); 
        }
        i++;
    }
    return (1);
}

int main(void)
{
    char *str1 = "012345678";
    char *str2 = "0 1 2 3 4 5 7 8"; 
    char *str3 = "0!?34578"; 
    char *str4 = " "; 

    printf("Test 1 Result: %d\n", ft_str_is_numeric(str1));
    printf("Test 2 Result: %d\n", ft_str_is_numeric(str2));
    printf("Test 3 Result: %d\n", ft_str_is_numeric(str3));
    printf("Test 4 Result: %d\n", ft_str_is_numeric(str4));

    return (0);
}

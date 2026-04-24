#include <stdio.h>

int ft_str_is_alpha(char *str)
{
    int i;
    i = 0;
    while(str[i] != '\0')
    {
        if(!((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')))
        {
            return 0;   //check for error first (other than alphabets and spaces), one single error and its out. if alphabet checks first, it will only check the first and ends immediately.
        }
        i++;
    }
    return 1; //check and return if only alphabets exists and if its empty string.
}

int main() 
{
    char str1[] = "Check the string char here";
    char str2[] = "Check the string !";
    char str3[] = "Checking";
    
    printf("This is string 1 result: %d\n",ft_str_is_alpha(str1));
    printf("This is string 2 result: %d\n",ft_str_is_alpha(str2));
    printf("This is string 3 result: %d\n",ft_str_is_alpha(str3));

    return 0;
}

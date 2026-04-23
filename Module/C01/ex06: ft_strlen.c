#include <stdio.h>

int ft_strlen(char *str)
{
    int i;
    i = 0;
    
    while(str[i] != '\0')
    {
        i++;
    }
    return(i); //need to return something bcos the parameter char *str stated u will need to return unless its a void
}

int main()
{
    char string[] = "Why me leh?";
    int len;
    len = ft_strlen(string);
    printf("Total count for the string is %d.\n", len);
    //printf("Total count for the string is %d.\n", ft_strlen(string));
    return 0; 
}

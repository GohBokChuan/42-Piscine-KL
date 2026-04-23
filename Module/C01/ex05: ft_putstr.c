#include <unistd.h>

void ft_putstr(char *str)
{
    int i;
    i = 0;
    while(str[i] != '\0')
   {
       write(1, &str[i], 1);
       //printf("%c", str[i]); --->Other method
       i++;
    }
}

int main()
{
    char string[] = "Hello, my name is Bok Chuan";
    //char *string = "Hello, my name is Bok Chuan"; ---->Other method
    
    ft_putstr(string);
    return 0;
}
//-------------End of Code---------------


//Miscellanous method//
#include <stdio.h>

void ft_putstr(char *str)
{
    printf("%s",str);
}

int main()
{
    char string[] = "Hello, my name is Bok Chuan";
    
    ft_putstr(string);    
    return 0;
}

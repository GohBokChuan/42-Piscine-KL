#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    int i;
    i = 0;
    
    int j;
    j = 0;
    
    while(dest[i] != '\0')
    {
        i++;
    }
    
    while(src[j] != '\0' && j < nb) //nb is inserted for the counter j represented by src bcos it starts to copy src from 0. 
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    
    return dest;
}
// --------------End of Code---------------

int main() 
{
    char dest[20] = "Hello";
    char src[] = "There";

    ft_strncat(dest, src, 5);  //nb/n is the maximum number of bytes to copy from src.
    
    printf("This is my string: %s\n", dest);
    return 0;
}

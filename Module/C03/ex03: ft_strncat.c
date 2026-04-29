#include <stdio.h>

char *ft_strcat(char *dest, char *src, unsigned int nb)
{
    int i;
    i = 0;
    
    int j;
    j = 0;
    
    while(dest[i] != '\0')
    {
        i++;
    }
    
    while(src[j] != '\0' && i < nb)
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
    char dest[50] = "Hello";
    char src[] = "There";

    ft_strcat(dest, src, 15);
    
    printf("This is my string: %s\n", dest);
    return 0;
}

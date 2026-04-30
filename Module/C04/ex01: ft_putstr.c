#include <unistd.h>

void mystring(char *str)
{
    int i;
    i = 0;
    
    while(str[i] != '\0')
    {
        write(1, &str[i], 1);
        i++;
    }
}

int main() 
{
    char string[]="Halo there";
    
    mystring(string);
    return 0;
}

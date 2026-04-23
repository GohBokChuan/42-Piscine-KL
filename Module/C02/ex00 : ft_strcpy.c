#include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{
    int i;
    i = 0;
    
    while(src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

int main()
{
    char src[] = "My day is crazy!";
    char dest[20];
    
    ft_strcpy(dest, src);
    printf("Source:%s\n", src);
    printf("Destination:%s\n", dest);
    return 0;
}

// ----------End of Code---------------

//Miscellanous Method for calling printf() instead of int main() via char *ft_strcpy() function
char *ft_strcpy(char *dest, char *src)
{
    int i = 0;

    while (src[i] != '\0')
    {
        dest[i] = src[i];
        // Using printf to show each step
        printf("Copying char: %c at index %d\n", src[i], i); //this is just an extra info to showcase the step. Can omit.
        i++;
    }
    dest[i] = '\0';
    
    // Print the final result before returning
    printf("Final copied string in function: %s\n", dest);   //printf with %s is only called after While loop bcos you want to wait until the "sentence" is fully built.
    
    return (dest);
}

//Miscellanous Method for calling write() in char *ft_strcpy() function
#include <unistd.h>

char *ft_strcpy(char *dest, char *src)
{
    int i = 0;

    while (src[i] != '\0')
    {
        dest[i] = src[i];
        
        // Raw output: printing the character we just copied
        write(1, &dest[i], 1);  //write is only called in While loop so that for every character we copy, we immediately "write" that single character to the screen. It copies one byte at a time.
        
        i++;
    }
    dest[i] = '\0';
    
    write(1, "\n", 1); // Print a newline for clarity
    return (dest);
}

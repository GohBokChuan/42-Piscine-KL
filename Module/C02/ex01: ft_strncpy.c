#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;
    i = 0;
    
    while(src[i] != '\0' && i < n)
    {
        dest[i] = src[i];
        i++;
    }
    
    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }
    return dest;
}

int main()
{
    char src[] = "My day is not crazy!";
    char dest[25];
    
    ft_strncpy(dest, src, 25);
    //ft_strncpy(dest, src, sizeof(dest)); ---> It calculates the byte size for you automatically in the same place where the array was created.
    //If you type 25 for the buffer and 25 for the function, and then later realize you need more space and change the buffer to 50 but forget to change the function call, you’ve just created a bug.
    printf("Source:%s\n", src);
    printf("Destination:%s\n", dest);
    return 0;
}
//---------End of Code---------

//Explanation Logic
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	// First loop: Copy characters from src to dest
	// Stop if we hit the end of src OR we reach the limit n
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	// Second loop: Padding
	// If we reached the end of src but haven't reached n yet,
	// fill the rest of the 'n' slots with null bytes.
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	// Always return the destination pointer
	return (dest);
}

/*
Why the two loops?
This is the part that trips most people up. strncpy isn't just a "capped" copy; it’s a buffer filler.

Loop 1 (The Copy): Moves the data. If your n is 10 but your src is "Hi" (2 chars), this loop runs twice.

Loop 2 (The Padding): This is the "cleanup" crew. If i is currently 2 and n is 10, this loop will put a \0 in slots 2, 3, 4, 5, 6, 7, 8, and 9.
*/

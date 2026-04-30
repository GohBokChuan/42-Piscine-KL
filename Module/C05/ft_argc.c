#include <unistd.h>

int main (int argc, char **argv)
{
    if (argc == 3)
    {
        int i;
        i = 0;
        
        int j;
        j = 0;
        
        while(argv[1][i])
        {
            write(1, &argv[1][i], 1);
            i++;
        }
        write(1, "\n", 1);
        
        while(argv[2][j])
        {
            write(1, &argv[2][j], 1);
            j++;
        }
    }
    write(1, "\n", 1);
}

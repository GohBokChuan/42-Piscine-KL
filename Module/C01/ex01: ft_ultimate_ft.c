#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

//-----------End of Code-----------

int     main()
{
        int a = 12;
        int *b = &a;
        int **c = &b;
        int ***d = &c;
        int ****e = &d;
        int *****f = &e;
        int ******g = &f;
        int *******h = &g;
        int ********i = &h;
        int *********nbr = &i;
	
	ft_ultimate_ft(nbr);
	printf("%d\n", *********nbr);
	return 0;
}

//Miscellanous Method

int main()
{
    int a = 12;
    int *b = &a;
    int **c = &b;
    int ***d = &c;
    int ****e = &d;
    int *****f = &e;
    int ******g = &f;
    int *******h = &g;
    int ********i = &h;
    //int *********nbr = &i;    // ← no need for this!

    ft_ultimate_ft(&i);         // &i becomes 9 stars on the spot
    printf("%d\n", a);
    return 0;
}

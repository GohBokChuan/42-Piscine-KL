#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
//Function above means "Go to the address in nbr
//and change the value there to 42"
int     main(void)
{
        int n = 10;
        int *nbr = &n; //optional --->this apply

        ft_ft(nbr); //----->this must apply
        printf("%d\n", n);
}
//int *nbr "I am holding the address of an integer"
//nbr "The address itself"
//*nbr "The value at the address." ~Dereference
int     main(void)
{
        int n = 10;

        ft_ft(&n);
        printf("%d\n", n);
}

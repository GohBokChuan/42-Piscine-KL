#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}

int main() 
{
    int a;
    int b;
    
    a = 15;
    b = 4;
    
    int div;
    int mod;
    
    ft_div_mod(a, b, &div, &mod);
    printf("Divide is %d, Mod is %d .", div, mod);
    return 0;
}

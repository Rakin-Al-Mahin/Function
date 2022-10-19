//07. HCF within function in C
// HCF = Highest Common Factor || GCD = Greatest Common Divisor
#include <stdio.h>

int HCF(int n1, int n2)
{
    n1 = ( n1 > 0) ? n1 : -n1; // if n1 > 0 then n1 but if n1 < 0 then -n1
    n2 = ( n2 > 0) ? n2 : -n2;

    while(n2 != 0)
    {
        int r = n1 % n2;
        n1 = n2;
        n2 = r;
    }

    return n1;
}

int main()
{
    int n1, n2;

    printf("Enter two integers: ");
    scanf("%d %d",&n1,&n2);

    //int lcm = (n1 * n2) / HCF(n1, n2);

    printf("HCF = %d", HCF(n1, n2));


    return 0;
}




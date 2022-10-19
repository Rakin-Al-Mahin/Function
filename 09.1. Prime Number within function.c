//09.1. Prime Number within function in C
#include <stdio.h>
#include <stdbool.h>

bool prime_number(int n)
{
    int i, count=0;

    if(n<=1)
        //printf("Not a Prime Number\n");
        return false;

    for(i=2; i<n; i++)
    {
        if(n%i == 0)
            count++;
            break;
    }
    if(count==0)
        //printf("\nPrime Number\n");
        return true;
    else
        //printf("\nNot a Prime Number\n");
        return false;
}

int main()
{
    int n;

    printf("Enter an integer number: \n");
    scanf("%d", &n);

    if(prime_number(n)==true)
        printf("Output: True");
    else
        printf("Output: False");

    return 0;
}

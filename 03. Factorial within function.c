//03. Factorial within function in C
#include <stdio.h>

int factorial(int n)
{
    int i, fact = 1;
    for(i=2; i<=n; i++)
    {
        fact *= i;
    }

    return fact;
}

int main()
{
    int n;

    printf("Enter the number for Factorial: \n");
    scanf("%d", &n);

    printf("The Factorial is: %d", factorial(n));


    return 0;
}

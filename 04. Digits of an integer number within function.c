//04. Digits of an integer number within function in C
#include <stdio.h>

int digit(int n)
{
    int i, count = 0;
    do
    {
        n /= 10;
        ++count;
    }
    while(n != 0);

    return count;
}

int main()
{
    int n;

    printf("Enter an integer number for digit count: \n");
    scanf("%d", &n);

    printf("The Integer has %d digit.", digit(n));


    return 0;
}

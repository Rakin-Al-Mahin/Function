//05. Reverse of an integer number within function in C
#include <stdio.h>

int reverse(int n)
{
    int i, r, reverse = 0;
    do
    {
        r = n%10;
        reverse = reverse*10 + r;
        n /= 10;
    }
    while(n != 0);

    return reverse;
}

int main()
{
    int n;

    printf("Enter an integer number: \n");
    scanf("%d", &n);

    printf("The reverse of the number is: %d", reverse(n));


    return 0;
}

//05. Sum of Digits of an integer number within function in C
#include <stdio.h>

int digit_sum(int n)
{
    int i, r, sum = 0;
    do
    {
        r = n%10;
        sum += r;
        n /= 10;
    }
    while(n != 0);

    return sum;
}

int main()
{
    int n;

    printf("Enter an integer number for sum of digit: \n");
    scanf("%d", &n);

    printf("The sum of digit is: %d", digit_sum(n));


    return 0;
}

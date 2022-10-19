//09.2. Perfect Number within function in C
#include <stdio.h>
#include <stdbool.h>

bool perfectNumber(int n)
{
    int i, r, sum = 0;

    for(i = 1; i < n; i++)
    {
        r = n % i;
        if(r == 0)
        {
            sum = sum + i;
        }
    }

    if(sum == n)
        return true;
    else
        return false;
}

int main()
{
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if(perfectNumber(n) == true)
        printf("\n%d is a Perfect Number");
    else
        printf("\n%d is not a Perfect Number");


    return 0;
}

//---------------------------------------------------------

/*#include<stdio.h>
#include<conio.h>

void main()
{
    int num, rem, sum = 0, i;

    printf("Enter a number\n");
    scanf("%d", &num);

    for(i = 1; i < num; i++)
    {
        rem = num % i;
        if (rem == 0)
        {
            sum = sum + i;
        }
    }

    if (sum == num)
        printf(" %d is a Perfect Number");
    else
        printf("\n %d is not a Perfect Number");

    getch();
}*/

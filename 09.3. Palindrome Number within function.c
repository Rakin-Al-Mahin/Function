//09.3. Palindrome Number within function in C
#include <stdio.h>
#include <stdbool.h>

bool palindromeNumber(int n)
{
    int i, r, original, reversed = 0;

    original = n;

    while(n != 0)
    {
        r = n%10;
        reversed = reversed*10 + r;
        n /= 10;
    }

    if(reversed == original)
        return true;
    else
        return false;
}

int main()
{
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if(palindromeNumber(n) == true)
        printf("\n%d is a Palindrome Number", n);
    else
        printf("\n%d is not a Palindrome Number", n);


    return 0;
}



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

//08. HCF within function in C
// LCM = Lowest Common Multiple
#include <stdio.h>

int LCM(int n1, int n2)
{
    int max = (n1 > n2) ? n1 : n2;

    while(1)
    {
        if((max%n1 == 0) && (max%n2 == 0))
        {
            break;
        }
        max++;
    }

    return max;
}

int main()
{
    int n1, n2;

    printf("Enter two integers: ");
    scanf("%d %d",&n1,&n2);

    printf("LCM = %d", LCM(n1, n2));


    return 0;
}




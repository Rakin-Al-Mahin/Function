//01. Triangle within function in C
#include <stdio.h>

void triangle(int n, char c[])
{
    int i, j;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n-(i+1); j++)
        {
            printf(" ");
        }
        for(j=0; j<2*(i+1)-1; j++)
        {
            printf("%s", c);
        }
        printf("\n");
    }
}

int main()
{
    int n;
    char c[50];

    printf("Enter an integer and a character for a Triangle: \n");
    scanf("%d %s", &n, c);

    triangle(n, c);


    return 0;
}

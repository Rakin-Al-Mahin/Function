//12. Number of words in a string within function in C
#include <stdio.h>
#include <string.h>

int nwords(char c[])
{
    int i = 0, count = 0;
    while(c[i] != '\0') // '\0' = null element / end of the string
    {
        if(c[i]==' ' || c[i]=='\n' || c[i]=='\t')
        {
            count++;
        }
        i++;
    }
    int words = count + 1;

    return words;
}

int main()
{
    char c[50];

    printf("Enter any string: ");
    gets(c);
    printf("\nThe number of words in that string is: %d", nwords(c));


    return 0;
}




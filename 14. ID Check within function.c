//14. ID Check within function in C
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool id_check(char str[])
{
    char Given[] = "202311007";
    int value;

    value = strcmp(Given, str);

    if(value == 0)
        return true;
    else
        return false;
}

int main()
{
    char str[20];

    printf("Enter your ID: ");
    gets(str);

    if(id_check(str) == true)
        printf("Output: True");
    else
        printf("Output: False");


    return 0;
}



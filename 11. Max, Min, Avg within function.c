//11. Max, Min, Avg within function in C
#include <stdio.h>

int maximum(int arr[], int size)
{
    int i, max = arr[0];

    for(i=0; i<size; i++)
    {
        if(arr[i]>max)
            max = arr[i];
    }

    return max;
}

int minimum(int arr[], int size)
{
    int i, min = arr[0];

    for(i=0; i<size; i++)
    {
        if(arr[i]<min)
            min = arr[i];
    }

    return min;
}

float avarage(int arr[], int size)
{
    int i, min = arr[0];
    int sum = 0;
    float avg;

    for(i=0; i<size; i++)
    {
        sum = sum + arr[i];
    }

    avg = (float)sum/i;
    return avg;
}


int main()
{
    int arr[] = {5, 10, 2, 7, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int i;

    printf("The Array: ");

    for(i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nThe maximum value of array is: %d", maximum(arr, size));
    printf("\nThe minimum value of array is: %d", minimum(arr, size));
    printf("\nThe average value of array is: %.2f", avarage(arr, size));


    return 0;
}




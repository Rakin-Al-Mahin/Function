//10. Quicksort in C
#include <stdio.h>

int partitioning(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;

    int j;
    for(j=low; j<high; j++)
    {
        if(arr[j] < pivot)
        {
            i++;
            //swap
            int temp1;
            temp1 = arr[i];
            arr[i] = arr[j];
            arr[j] = temp1;
        }
    }
    //pivot index
    i++;
    int temp2;
    temp2 = arr[i];
    arr[i] = arr[high];
    arr[high] = temp2;

    return i;
}

void QuickSort(int arr[], int low, int high)
{
    if(low < high)
    {
        int pidx = partitioning(arr, low, high);

        QuickSort(arr, low, pidx - 1); //left side of pivot
        QuickSort(arr, pidx + 1, high); //right side of pivot
    }
}

int main()
{
    int arr[] = {5, 10, 2, 7, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int i;

    printf("The Unsorted Array: ");

    for(i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nThe Sorted Array: ");

    QuickSort(arr, 0, size-1);

    for(i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }


    return 0;
}




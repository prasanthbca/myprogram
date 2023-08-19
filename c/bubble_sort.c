// below we have a simple C program for bubble sort
#include <stdio.h>

void bubble_Sort(int arr[], int n)
{
    int i, j, temp;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n-i-1; j++)
        {
            if( arr[j] > arr[j+1])
            {
            
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            } 
        }
    }
    
   
    printf("Sorted Array: ");
    for(i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }
}

int main()
{
    int arr[100], i, n, step, temp;
   
    printf("Enter the number of elements to be sorted: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Enter element no: %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    bubble_Sort(arr, n);
    
    return 0;
}

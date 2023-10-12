/*Bubble sort*/
#include <stdio.h>

void bubble_sort(int *arr,int size);

int main()
{
    int arr[50],size,i;
    printf("Enter the array size: ");
    scanf("%d",&size);
    printf("Enter the array elemets: ");
    for(i=0; i<size; i++)
    {
        scanf("%d",(arr+i));
    }
    bubble_sort(arr,size);
    printf("Array after sorting: ");
    for(i=0; i<size; i++)
    {
        printf("%d ",*(arr+i));
    }
    printf("\n");
    return 0;
}

void bubble_sort(int *arr,int size)
{
    int i,j,temp;
    for(i=0; i<size; i++)
    {
        for(j=0; j<size-i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                arr[j] = arr[j] + arr[j+1];
                arr[j+1] = arr[j] - arr[j+1];
                arr[j] = arr[j] - arr[j+1];
            }
        }
    }
}
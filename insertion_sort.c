/*Insertion sort*/

#include<stdio.h>

void insertion_sort(int *arr,int size);

int main()
{
    int arr[50],size,i;
    printf("Enter the array size: ");
    scanf("%d",&size);
    printf("Enter the array elements: ");
    for(i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    insertion_sort(arr,size);
    printf("Array after sorting: ");
    for(i=0; i<size; i++)
    {
        printf("%d ",i[arr]);
    }
    return 0;
}


void insertion_sort(int *arr,int size)
{
    int i,j,temp;
    for(i=1; i<size; i++)
    {
        j = i-1;
        temp = arr[i];
        while(j>=0 && arr[j] > temp)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}
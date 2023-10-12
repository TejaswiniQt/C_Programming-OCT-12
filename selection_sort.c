/*Selection sort*/

#include<stdio.h>

void selection_sort(int *arr,int size);

int main()
{
    int arr[50],size,i;
    printf("Enter the array size: ");
    scanf("%d",&size);
    printf("Enter the array elements: ");
    for(i=0; i<size; i++)
    {
        scanf("%d",&i[arr]);
    }
    selection_sort(arr,size);
    printf("Array after sorting: ");
    for(i=0; i<size; i++)
    {
        printf("%d ",i[arr]);
    }
    return 0;
}

void selection_sort(int *arr,int size)
{
    int i,j,min,temp;
    for(i=0; i<size; i++)
    {
        min = i;
        for(j=i+1; j<size; j++)
        {
            if(arr[j] < arr[min])
            min = j;
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp; 
    }
}
/*Quick sort*/

#include<stdio.h>

void quick_sort(int *arr,int lb,int ub);
int partition(int *arr,int lb,int ub);
void swap(int *start,int *end)
{
    int temp = *start;
    *start = *end;
    *end = temp;
}

int main()
{
    int arr[50],size,i;
    printf("Enter the array size: ");
    scanf("%d",&size);
    printf("Enter the elements of array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    quick_sort(arr,0,size-1);
    printf("Array after sorting: ");
    for(i=0; i<size; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}

void quick_sort(int *arr,int lb,int ub)
{
    int loc;
    if(lb < ub)
    {
        loc = partition(arr,lb,ub);
        quick_sort(arr,lb,loc-1);
        quick_sort(arr,loc+1,ub);
    }
}

int partition(int *arr,int lb,int ub)
{
    int start=lb,end=ub,pivot,temp;
    pivot = arr[lb];
    while(start < end)
    {
        while(arr[start] <= pivot)
        {
        start++;
        }
        while(arr[end] > pivot)
        {
        end--;
        }
        if(start < end)
        {
            swap(&arr[start],&arr[end]);
        }
    }
   swap(&arr[lb],&arr[end]);
    return end;
}
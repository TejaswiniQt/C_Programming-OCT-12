/*Binary search*/

#include<stdio.h>

int binary_search(int arr[],int size,int data);

int main()
{
    int size,i,data,element;
    printf("Enter array size: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enetr array elements: ");
    for(i=0; i<size; i++)
    {
        scanf("%d",&i[arr]);
    }
    printf("Enter the element to be searched: ");
    scanf("%d",&data);
    element = binary_search(arr,size,data);
    if(element > -1)
    printf("%d is found at index : %d\n",data,element);
    else
    printf("Element not found\n");
    return 0;
}

int binary_search(int arr[],int size,int data)
{
    int mid,l=0,r=size-1;
    while(l < r)
    {
        mid = (l+r)/2;
        if(data == arr[mid])
        return mid;
        else if(data < arr[mid])
        l = mid -1 ;
        else
        r = mid + 1;
    }
    return -1;
}
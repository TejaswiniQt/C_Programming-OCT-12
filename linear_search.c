/*Linear search*/

#include<stdio.h>

int linear_search(int arr[],int size,int data);

int main()
{
    int size,i,element,data;
    printf("Enter array size: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter array elements: ");
    for(i=0; i<size; i++)
    {
        scanf("%d",&i[arr]);
    }
    printf("Enter the element to be searched: ");
    scanf("%d",&data);
    element = linear_search(arr,size,data);
    if(element > -1)
    printf("%d is found at index : %d\n",data,element);
    else
    printf("Element not found\n");
    return 0;
}

int linear_search(int arr[],int size,int data)
{
    int i;
    for(i=0; i<size; i++)
    {
        if(arr[i] == data)
        return i;
    }
    return -1;
}
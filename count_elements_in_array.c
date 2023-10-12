/*. Create a function that uses pointer arithmetic to count the number of elements in an 
array without utilizing loop constructs.
WTD: Subtract the pointer to the first element from the pointer just past the last element.
(e.g.: I/P: int arr[] = {1,2,3,4,5} ,O/P: 5 )*/

#include<stdio.h>

int count_elements(int *arr);

int main()
{
    int arr[] = {1,2,3,4,5};
    /*
    int (*ptr1)[5] = &arr;
    int (*ptr2)[5];
    ptr2 = ptr1 + 1;
    int size = (unsigned int)((char*)ptr2 - (char *)ptr1);
    printf("%zu\n",(size/sizeof(int)));*/
    int *start,*end;
    start = arr;
    end = arr + (sizeof(arr) / sizeof(arr[0]));
    printf("%ld\n",end-start);
    return 0;
}

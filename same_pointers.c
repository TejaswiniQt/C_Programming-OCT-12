/*Design a function that determines if two pointers point to the same array.
WTD: Traverse from both pointers in both forward and backward directions until null or 
boundary is hit. If both pointers hit the same boundaries, they belong to the same array.
(e.g.: I/P: int arr[] = {1,2,3,4}, *ptr1 = &arr[1], *ptr2 = &arr[3]; O/P: True )*/

#include <stdio.h>
#include <stdbool.h>

int arePointersInSameArray(int* ptr1, int* ptr2, int* arr, int size) 
{
    int* start = arr;
    int* end = arr + size - 1;

    int* current1 = ptr1;
    int* current2 = ptr2;

    while (current1 < end || current2 < end) {
        if (current1 < end) {
            current1++;
        }
        if (current2 < end) {
            current2++;
        }
        if (current1 == current2) {
            return 1;
        }
    }

    current1 = ptr1;
    current2 = ptr2;

    while (current1 > start || current2 > start) {
        if (current1 > start) {
            current1--;
        }
        if (current2 > start) {
            current2--;
        }
        if (current1 == current2) {
            return 1;
        }
    }

    return 0;
}

int main() {
    int arr[] = {1, 2, 3, 4};
    int* ptr1 = &arr[2];
    int* ptr2 = &arr[1];

    int size = sizeof(arr) / sizeof(arr[0]);

    if (arePointersInSameArray(ptr1, ptr2, arr, size)) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}

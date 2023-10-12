/*Write a program to find the size of a data type without using the `sizeof` operator, use 
pointer arithmetic.
WTD: Declare a pointer to the given type and increment it. Subtract the original pointer 
value from the incremented value to get the size.
(e.g.: I/P: int; O/P: 4( based on platform)*/

#include<stdio.h>


int main()
{
    int num = 10;
    int *ptr1,*ptr2;
    ptr1 = &num;
    ptr2 = ptr1 + 1;
    //printf("Sizeof num(int data type) = %d\n",(int)(ptr2-ptr1));
  //  printf("%u\n",(unsigned int) ((ptr2)-(ptr1)));
    int *a = &num;
    int res = (char*)(a+1) - (char*)(a);
    printf("%d\n",res);
    return 0;
}
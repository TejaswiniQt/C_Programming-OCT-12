
#include<stdio.h>

int main()
{
    int num1 = 15, num2 = 7, p1 = 0, p2 = 4, n = 2;
    int mask1, mask2;
    
    mask1 = (1 << n) - 1;
    mask1 = mask1 << p1;
    num1 = num1 & mask1;

    mask2 = (1 << n) -1;
    mask2 = ~(mask2 << p2);
    num2 = num2 & mask2;

    num2 = (num1 << (p2 - p1)) | num2;
    printf("%d\n",num2);
    return 0; 
}
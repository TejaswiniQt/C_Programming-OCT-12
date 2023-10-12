/* num = 21569*/

#include<stdio.h>
#include<math.h>

int main()
{
    int num = 21569,temp;
    int rem,min,max=0,count=0,max_index,min_index,k,limit,newnum=0;
    min = num % 10;
    temp = num;
    while(num)
    {
        count++;
        rem = num %10;
        if(rem > max)
        {
            max = rem;
            max_index = count;
        }
        if(rem < min)
        {
            min = rem;
            min_index = count;
        }
        num = num /10;
    }
    //printf("Max = %d, i=%d\n min = %d, j = %d\ncount = %d\n",max,max_index,min,min_index,count);
    for(k=1; k<=count; k++)
    {
        rem = temp % 10;
        limit = pow(10,k-1);
        if(k == max_index)
        newnum = newnum + (min * limit);
        else if(k == min_index)
        newnum = newnum + (max * limit);
        else
        newnum = newnum + (rem * limit);
        temp = temp / 10;
    }
    printf("Newnum = %d\n",newnum);
    return 0;
}

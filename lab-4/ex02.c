#include<stdio.h>
int main()
{
    int num=0,sum = 0,count = 0;

    while(count<10)
    {
        printf("Enter the number:");
        scanf("%d",&num);
        count++;
        sum += num;
    }
    printf("total sum is : %d\n",sum);
    return 0;
}
#include<stdio.h>
int main()
{
    int num=0,sum = 0,count;
    float average;
    
    for (int count = 0; count < 10; count++) 
    {
        printf("Enter the number =");
        scanf("%d",&num);
        sum += num;
    }
average = sum/10.0;
printf("total sum is : %d\n",sum);
printf("Average is : %2.f\n",average);
return 0;
}
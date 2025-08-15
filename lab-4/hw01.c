#include<stdio.h>
int main()
{
    int sum = 0,count;

    for (count = 0; count < 10; count++)
    {
        sum = sum + count;
    }
    printf("Enter the number = %d",sum);

    return 0;
}
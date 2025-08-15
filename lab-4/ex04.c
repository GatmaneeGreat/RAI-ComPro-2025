#include<stdio.h>
int main()
{
    int num,sum;

    

    printf("Enter a number:");
    scanf("%d",&num);
    printf("Multiplication Table for %d:\n",num);
    for(sum=1 ; sum<=12 ; sum++)
    {
        printf("%d * %d = %d\n",num,sum,num*sum);
    }

    return 0;
}
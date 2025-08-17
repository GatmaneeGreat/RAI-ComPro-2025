#include<stdio.h>
int main()
{
    int num,sum;

    scanf("%d",&num);
    printf("Multiplication table \n%d",num);
    for(sum=1; sum<=12; sum++)
    {
        printf("%d * %d = %d\n",num,sum,num*sum);
    }
    return 0;
}
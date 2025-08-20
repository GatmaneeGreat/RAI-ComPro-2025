#include <stdio.h>
int main()
{
    int num,sum;

    do
    {
        printf("Enter a number : ");
        scanf("%d",&num);

    }
    while(num != 0);
    {
        sum += num;
        printf("result : %d\n",sum);
    }

    return 0;
}

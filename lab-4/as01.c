#include<stdio.h>
int main()
{
    int bi[32];
    int i=0;
    int num;
    printf("Decimal     : ");
    scanf("%d",&num);

    int sum=num;
    if(sum==0)
    {
        printf("Binary : 0");
    }
    else
    {
        while(sum>0)
        {
            bi[i]=sum%2;
            sum=sum/2;
            i++;
        }
        printf("Binary      : ");

        for(int j = i - 1; j >= 0; j--)
        {
            printf("%d",bi[j]);
        }

        printf("\nHexadecimal : %x\n",num);
    }
    return 0;
}
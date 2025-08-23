#include<stdio.h>
int main()
{
    int de,bi[32],hex,sum,i=0,j,n[]={19, 31, 85, 1961, 110, 127, 25, 59};

    while(sum > 0)
    {
        bi[i] = sum % 2;
        sum /= 2;
        i++;
    }
    if(i == 0 )
    {
        printf("0");
    }
    for(int j=i=-1; j>=0; j--)
    {
        printf("%d",bi[j]);
    }

    printf("%-10s %-20s %-10s\n", "Decimal", "Binary", "Hexadecimal");

    for(int i=0; i<sum; i++)
    {
        printf("%-10d",n[i]);
        printf("%-20d\n",n[i]);
    }

    return 0;
}
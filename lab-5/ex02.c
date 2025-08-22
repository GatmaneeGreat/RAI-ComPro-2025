#include<stdio.h>
int main()
{
    int original[9]={1,2,3,4,5,6,7,8,9};

      printf("Reversed Arry:");


    for(int n=8; n>-1; n--)
    {
        printf("%2d",original[n]);
    }

    return 0;
}
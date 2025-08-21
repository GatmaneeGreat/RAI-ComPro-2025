#include<stdio.h>
int main()
{
    int num=0;

    printf("Multiplication table\n");

    while(num<=12)
    {
        printf("%4d*%-2d = %-3d\n",2,num,2*num);
        num++;
    }

    return 0;
}
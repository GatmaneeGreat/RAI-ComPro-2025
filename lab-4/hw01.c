#include<stdio.h>
int main()
{
    char A=0;
    int ascii=0;

    for( int ascii = 1; ascii <23; ascii++)
    {
        printf("Decimal   Ascii\n");
        scanf("%d,%3c",&ascii,&A);
    }

    return 0;
}
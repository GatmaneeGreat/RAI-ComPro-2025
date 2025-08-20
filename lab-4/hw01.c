#include<stdio.h>
int main()
{
    char as;
    int va;

    printf("ASCII   Decimal\n");
    scanf("%c",&as);
    va = (int)as;
    printf("ASCII   Decimal\n");
    printf("%3c%9d\n",as,va);

    return 0;
}
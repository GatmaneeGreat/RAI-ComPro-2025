#include<stdio.h>
int main()
{
    int num1;
    int num2;
    

    printf("Enter a number:");
    scanf("%d",&num1);

    printf("Enter a number:");
    scanf("%d",&num2);
    if(num1 != num2)
    {
        printf("Does not match.try again \n");
    }
    else{
        printf("Match\n");
    }

    return 0;
}
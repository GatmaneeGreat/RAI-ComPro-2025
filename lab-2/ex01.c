#include<stdio.h>
int main()
{
    int inti;
    float point;
    char nan;

    printf("Please enter an integer value:");
    scanf("%d",&inti);
    printf("You entered: %d\n",inti);

    printf("Please enter an float value: ");
    scanf("%f",&point);
    printf("You entered: %.1f\n",point);

    printf("Please enter a character : ");
    scanf("%s",&nan);
    printf("You entered: %c\n",nan);

    return 0;

}
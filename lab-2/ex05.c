#include<stdio.h>
int main()
{
    int a;
    float h;
    char name[77];
    char university[77];
    printf("Enter your full name:");
    scanf("%[^\n]",name);

    printf("Enter your age:");
    scanf("%d", &a);

    printf("Enter your height:");
    scanf("%f", &h);

    printf("Enter your University name:");
    scanf("%s", university);

    printf("Hi! Everyone. This is K.%sfrom %s. I am %d years old and my height is %3.1f cm tall.",name,university,a,h);

    
    return 0;
}
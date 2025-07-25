#include<stdio.h>
int main()
{
    char name[25];
    int age;
    float height;
    float weight;
    char gender;
    char education[50];

    printf("Enter your name:");
    scanf("%[^\n]",name);
    printf("Enter your age:");
    scanf("%d",&age);
    printf("Enter your height:");
    scanf("%f",&height);
    printf("Enter your weight:");
    scanf("%f",&weight);
    printf("Enter your gender:");
    scanf("%s",&gender);
    printf("Enter your Education Qualification:");
    scanf(" %[^\n]",education);

    return 0;
}
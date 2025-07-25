#include<stdio.h>
int main()
{
    char name[25];
    int studentid;
    float programming, physics, calculus, gpa;

    printf("Enter your name:");
    scanf("%[^\n]",name);

    printf("Enter your student ID:");
    scanf("%d", &studentid);

    printf("Enter your Programming score:");
    scanf("%f", &programming);

    printf("Enter your Physics score:");
    scanf("%f", &physics);

    printf("Enter your Calculus score:");
    scanf("%f", &calculus);

    gpa= (programming + physics + calculus)/3;
    printf("Hi %s(%d) ! Your GPA is %.2f\n",name, studentid, gpa);

    return 0;
}
#include<stdio.h>
int num1= 0;
int num2= 0;
int sum= 0;
int sub= 0;
int times= 0;
int divide= 0;
int percent= 0;
int c;
int main(){

printf("Enter num1:");
scanf("%d", &num1);
printf("Enter num2:");
scanf("%d", &num2);
printf("Calculator Menu:\n");
printf("1. +\n");
printf("2. -\n");
printf("3. *\n");
printf("4. /\n");
printf("5. %% \n");
printf("Choose menu:");
scanf("%d", &c);

switch(c){
    case 1:
        sum = num1 + num2;
        printf("Ans: num1+num2 = %d\n", sum);
        break;
    case 2:
        sub = num1 - num2;
        printf("Ans: num1-num2 = %d\n", sub);
        break;
    case 3:
        times = num1 * num2;
        printf("Ans: num1*num2 = %d\n", times);
        break;
    case 4:
        divide = num1 / num2;
        printf("Ans: num1/num2 = %d\n", divide);
        break;
    case 5:
        percent = num1 % num2;
        printf("Ans: num1 %% num2 = %d\n", percent);
        break;
    default:
        printf("Invalid menu choice!\n");}
    return 0;
}
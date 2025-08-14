#include<stdio.h>
int main()
{
int num1= 0;
int num2= 0;
int sum= 0;
int sub= 0;
int times= 0;
int divide= 0;
int percent= 0;
int ch;

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
scanf("%d", &ch);

if(ch == 1)
{
    int sum = num1 + num2;
    printf("Ans: num1+num2 = %d\n", sum);
}
else if(ch == 2){
    int sub = num1 - num2;
    printf("Ans: num1-num2 = %d\n", sub);
}
else if(ch == 3) {
    int times = num1 * num2;
    printf("Ans: num1*num2 = %d\n", times);
}
else if(ch == 4) {
    int divide = num1 / num2;
    printf("Ans: num1/num2 = %d\n", divide);
}
else if(ch == 5) {
    int percent = num1 % num2;
    printf("Ans: num1 %% num2 = %d\n", percent);
}
    return 0;
}
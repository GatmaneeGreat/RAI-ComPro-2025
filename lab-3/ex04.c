#include<stdio.h>
int main()
{
    char grade,name[20];
    int score1,score2,score3;
    printf("Enter your name : ");
    scanf("%s",name);

    printf("Enter your Calculus score : ");
    scanf("%d",&score1);

    printf("Enter your Physics score : ");
    scanf("%d",&score2);

    printf("Enter your Science score : ");
    scanf("%d",&score3);

    float Average=(score1+score2+score3)/3.0;
    if (Average >= 80)
    {
        grade='A';
    }else if(Average >= 70 && Average < 80){
            grade='B';
        }else if(Average >= 60 && Average < 70){
            grade='C';
        }else if(Average >= 50){
            grade='F';}
            printf("%s,your average is %.2f you got grade %c\n",name,Average,grade);
    return 0;
    
}
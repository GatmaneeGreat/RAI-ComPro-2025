#include<stdio.h>
int main()
{
    int num;
    int inrage =(num >= 1 && num <= 100);

    printf("Enter number : ");
    scanf("%d",&num);

switch(inrage)
{
case 1:
    switch(num %2){
        case 0 : printf("%d is even\n",num);
                 break;
        case 1 : printf("%d is odd\n",num);
                 break;
    }
    break;
case 0 : printf("%d out of rage\n",num);
                 break;
}
  return 0;
}
#include <stdio.h>
#define PI 3.1416

int main()
{
    float hg,rd,vl;

    printf("Enter cone height:");
    scanf("%f",&hg);

    printf("Enter cone base radius:");
    scanf("%f",&rd);

    vl = (1.0/3.0) * PI * rd * rd * hg;

    printf("Cone volome = %.1f\n",vl);

    if (vl>260)
    {
        printf("This cone is perfect for Supun project\n");
    }
    else
    {
        printf("This cone is not fit for this project\n");
    }
    return 0;
}

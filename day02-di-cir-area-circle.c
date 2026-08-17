#include<stdio.h>
int main()
{
    float r;
    const float PI =3.1416;
    scanf("%f",&r);
    printf("Diameter = %.2f\n",2*r);
    printf("Circumference = %.2f\n",2*PI*r);
    printf("Area = %.2f\n",PI*r*r);
}

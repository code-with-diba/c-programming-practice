#include<stdio.h>
#include<math.h>
int main()
{
    float a;
    float PI = 3.1416;
    scanf("%f",&a);
    printf("cot(a) = %.2f",1/tan(a*PI/180));
}

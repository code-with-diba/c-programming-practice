#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,area;
    scanf("%lf %lf",&a,&b);
    area = (b/4)*sqrt(4*a*a-b*b);
    printf("Area = %lf",area);
}

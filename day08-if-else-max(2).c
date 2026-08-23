#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);

    if(a>b)
        printf("maximum = %d",a);
    else if(b>a)
        printf("maximum = %d",b);
    else
        printf("Equal");
}

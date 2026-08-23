#include<stdio.h>
int main()
{
   int a,b,c;
   scanf("%d %d %d",&a,&b,&c);

   if(a>b && a>c)
    printf("Maximum number = %d",a);

   else if(b>a && b>c)
   printf("Maximum number = %d",b);

   else if(c>a && c>b)
   printf("Maximum number = %d",c);

   else
    printf("Equal");

}

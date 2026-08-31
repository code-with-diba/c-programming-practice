#include<stdio.h>
int main()
{
   int num,sum=0,r,temp,fact,i;
   scanf("%d",&num);

   temp=num;

   while(temp!=0)
   {
       r=temp%10;
       fact=1;
   for(i=1;i<=r;i++)
         fact=fact*i;
         sum=sum+fact;
         temp=temp/10;
    }
    if(num==sum)
        printf("%d is a Strong number",num);
    else
         printf("%d is not a Strong number",num);
}

#include<stdio.h>
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i=i+3)
      sum=sum+i;
      printf("Sum = %d",sum);
}

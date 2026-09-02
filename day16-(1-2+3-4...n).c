#include<stdio.h>
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        if(n%2!=0)
            sum=sum+i;
        else
            sum=sum-i;
    }
    printf("The sum is = %d",sum);
}

#include<stdio.h>
int main()
{
    int n,a,i,j;
    scanf("%d",&n);
    a=n;

    for(i=1;i<=n;i++){
        for(j=1;j<=a;j++){
            printf("%d ",j);
        }
        a--;
        printf("\n");
    }
}


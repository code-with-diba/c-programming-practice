#include<stdio.h>
int main()
{
    int n,a,i,j;
    scanf("%d",&n);

    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            a=n/2+1;
            if(i==a || j==a)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

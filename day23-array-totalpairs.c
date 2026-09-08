#include <stdio.h>
int main()
{
    int arr[8]={1,2,3,4,5,6,7,8},x=12,i,j,totalpairs=0;

    for(i=0;i<=7;i++){
            for(j=i+1;j<=7;j++){
                    if(arr[i]+arr[j]==x)
                totalpairs++;
                }
        }
        printf("%d",totalpairs);
}

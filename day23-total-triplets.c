#include <stdio.h>
int main()
{
    int arr[8]={1,2,3,4,5,6,7,8},x=12,i,j,k,totaltriplets=0;

    for(i=0;i<=7;i++){
            for(j=i+1;j<=7;j++){
                    for(k=j+1;k<=7;k++){
                        if(arr[i]+arr[j]+arr[k]==x)
                          totaltriplets++;
                    }

                }
        }
        printf("%d",totaltriplets);
}

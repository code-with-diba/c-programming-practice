#include <stdio.h>
int main()
{
    int arr[7]={-10,-4,-200,-80,-19,-5,-12},i,max=arr[0];
    for(i=1;i<=6;i++){
        if(max<arr[i])
            max=arr[i];
        }
        printf("Maximum value = %d",max);
}

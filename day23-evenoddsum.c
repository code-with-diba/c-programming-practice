#include <stdio.h>
int main()
{
    int arr[6]={1,3,5,7,9,11},i,sumeven=0,sumodd=0;
    for(i=0;i<=5;i++){
        if(i%2==0)
            sumeven += arr[i];
        else
            sumodd += arr[i];
            }
        printf("%d",sumeven-sumodd);
}

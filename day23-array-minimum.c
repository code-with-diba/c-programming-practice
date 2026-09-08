#include <stdio.h>
int main()
{
    int arr[7]={-10,-4,-200,-80,-19,-5,-12},i,min=arr[0];
    for(i=1;i<=6;i++){
        if(min>arr[i])
            min=arr[i];
        }
        printf("Minimum value = %d",min);
}

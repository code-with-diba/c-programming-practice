#include <stdio.h>
int main()
{
   int arr[6]={1,2,5,3,8,9},i,product=1;
   
   for(i=0;i<=5;i++){
    product=product*arr[i];
   }
   printf("Product = %d",product);
}

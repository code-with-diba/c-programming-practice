#include<stdio.h>
int main()
{
    float a,b;
    char op;
    scanf("%f %c %f",&a,&op,&b);

    switch(op)
    {
        case '+':
        printf("%.2f",a+b);
        break;

        case '-':
        printf("%.2f",a-b);
        break;

        case '*':
        printf("%.2f",a*b);
        break;

        case '/':
         if(b!=0)
            printf("%.2f",a/b);
         else
            printf("Cannot divide by zero");
            break;
        default:
            printf("Invalid operator");
        }
}

#include<stdio.h>
int main()
{
    int choice;
    float F,C,convertedTemp;
    printf("Temperature conversion menu :\n");
    printf("1.Fahrenheit to celsius\n");
    printf("2.Celsius to Fahrenheit\n");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
    {
        printf("Enter Fahrenheit temperature :");
        scanf("%f",&F);
        convertedTemp=(F-32)/1.8;
        printf("%f",convertedTemp);
        break;
    }
    case 2:
    {
        printf("Enter Celsius temperature :");
        scanf("%f",&C);
        convertedTemp=(1.8*C)+32;
        printf("%f",convertedTemp);
        break;
    }
    default:
        printf("Not a correct option");

    }

}

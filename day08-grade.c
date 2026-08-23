#include<stdio.h>
int main()
{
    float m;
    scanf("%f",&m);

    if(m >= 80 && m<=100)
        printf("A+");

    else if(m >= 70 && m<=79)
        printf("A");

    else if(m >= 60 && m<=69)
        printf("A-");

    else if(m >= 50 && m<=59 )
        printf("B");

    else if(m >= 40  && m<=49)
        printf("c");

    else if(m >= 33 && m<=39 )
        printf("D");

    else if(m >= 0 && m<=32 )
        printf("F");
    else
        printf("Invalid number");
}



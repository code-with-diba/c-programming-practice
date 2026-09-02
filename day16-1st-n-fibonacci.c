{
    int n,i,a=1,b=1,sum=1;
    scanf("%d",&n);

    if(n>=1)
        printf("the 1st fibonacci number is : %d\n",a);

    if(n>=2)
    printf("the 2nd fibonacci number is : %d\n",b);

    for(i=3;i<=n;i++)
    {
        sum = a+b;
        a=b;
        b=sum;
        if(i==3)
          printf("the 3rd fibonacci number is : %d\n",sum);
        else
         printf("the %dth fibonacci number is : %d\n",i,sum);
    }
}

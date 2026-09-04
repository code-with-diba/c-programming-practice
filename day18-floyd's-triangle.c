int main()
{
    int n,a=1,i,j;
    printf("Enter no of rows : ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d ",a);
            a++;
        }
        printf("\n");
    }
}

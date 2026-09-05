int main()
{
    int n,a,d,i,j,k;
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf("  ");
        }
        a=1;
        for(k=1;k<=2*i-1;k++){
            d=a+64;
            printf("%c ",(char)d);
            a++;
        }
        printf("\n");
    }
}

#include<stdio.h>
int main ()
{
    int i,j,k,n;
    printf("Enter Number:");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(k=n; k>i; k--)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            printf("%d",j);
        }
        for(int h=i-1; h>=1; h--)
        {
            printf("%d",h);
        }
        printf("\n");
    }
     for(i=1; i<=n; i++)
     {
         for(k=1; k<=i; k++)
        {
            printf(" ");
        }
        for(j=1; j<=n-i; j++)
        {
            printf("%d",j);
        }
        for(int k=2;k<=n-i;k++)
        {
            printf("%d",k);
        }
        printf("\n");



     }



}

#include<stdio.h>

int main()
{
    int i,j,k,n;
    printf("Enter number :");
    scanf("%d",&n);
    for(i=n; i>=1; i--)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d",j);
        }
        for(k=1; k<=n-i; k++)
        {
            printf(" _ ");
        }
        for(j=i; j>=1; j--)
        {
            printf("%d",j);
        }
        printf("\n");

    }
}

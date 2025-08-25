#include<stdio.h>
int main ()
{
    int i,j,k,n;
    printf("Enter Number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(k=1;k<=n-i;k++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%c",j+64);
        }
        for(j=i-1;j>=1;j--)
        {
            printf("%c",j+64);
        }
        printf("\n");
    }

}

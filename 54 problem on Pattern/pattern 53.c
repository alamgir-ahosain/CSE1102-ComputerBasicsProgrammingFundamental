#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter Number :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=n-i;j<=1;j++)
        {
            printf(" * ");
        }
        printf("\n");
    }





    return 0;
}

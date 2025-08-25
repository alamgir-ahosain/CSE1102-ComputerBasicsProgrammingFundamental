#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter Number:");
    scanf("%d",&n);
    for(i=n; i>=1; i--)
    {
        for(j=1; j<=n; j++)
        {
            printf("%d",i);
        }


        printf("\n");
    }
    return 0;
}

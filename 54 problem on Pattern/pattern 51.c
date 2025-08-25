
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter Number :");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=i;j<=n;j++)
        {
            printf("%d",j);
        }


            for(int k=n-1;k>=i;k--)
            {
                printf("%d",k);
            }
        printf("\n");
    }





    return 0;
}

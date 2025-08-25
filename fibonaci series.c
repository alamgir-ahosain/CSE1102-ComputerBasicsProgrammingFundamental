#include<stdio.h>
int main ()
{
    int a[100],n,i,j;
    printf("Enter fibonaci number:");
    scanf("%d",&n);

    a[0]=0;
    a[1]=1;
    for(j=2; j<n; j++)
    {
        a[j]=a[j-1]+a[j-2];

    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}



/*#include<stdio.h>
int main ()
{
    int n,i,j,sum=0;
    printf("Enter Element:");
    scanf("%d",&n);
    int a[n];
    for(int j=0; j<n; j++)
    {
        scanf("%d",&a[j]);

    }

    for(int i=0; i<n; i++)
    {
        sum=sum+a[i];
    }
    printf("sum is =%d\n",sum);
    printf("The Averege is =%.2f\n",(float)sum/n);

    return 0;
}*/

#include<stdio.h>
int main()
{
    int i,n, a[n],sum=0;

    printf("Enter element:");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int j=0; j<n; j++)
    {
        sum=sum+a[j];
    }
     float avg=sum/n;
    printf("sum is %d",sum);
    printf("%.2f",avg);





    return 0;
}

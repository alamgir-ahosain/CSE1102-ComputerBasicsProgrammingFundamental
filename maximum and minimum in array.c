
#include<stdio.h>
int main()
{
    int i,n,j,k;
    printf("Enter element:");
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Main array:");
    for(int j=0; j<n; j++)
    {
        printf("%d  ",a[j]);
    }
    int min=a[0],max=a[0];
    for(j=0;j<n;j++)
    {
        if(max<a[j]) //index one by one check kortesi
        {
            max=a[j];
        }
    }
    for(k=0;k<n;k++)
    {
        if(min>a[k])  //index one by one check kortesi
        {
            min=a[k];
        }
    }
    printf("Maximum value is %d\n",max);
    printf("Minimum value is %d",min);

   return 0;
}

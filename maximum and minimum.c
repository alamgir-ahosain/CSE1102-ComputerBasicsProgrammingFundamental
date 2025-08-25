#include<stdio.h>
int main ()
{
    int n;
    printf("Enter Element:");
    scanf("%d",&n);
    int a[n];
    for(int j=0; j<n; j++)
    {
        scanf("%d",&a[j]);

    }

    int max=a[0];
    for(int i=1;i<n;i++)
    {


      {

       if(max<a[i]);
        max=a[i];
      }

    }




    int min=a[0];
     for(int k=1;k<n;k++)
    {

      {
          if(min>a[k]);
        min=a[k];
      }
    }

      printf("Max is=%d\n",max);
   printf("Min is=%d",min);

    return 0;
}

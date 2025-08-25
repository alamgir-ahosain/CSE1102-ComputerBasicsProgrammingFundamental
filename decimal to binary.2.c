#include<stdio.h>
int main()
{
 int arr[30],i,n,j,rem;
 printf("Enter decimal number:");
 scanf("%d",&n);
 for(i=0;n!=0;i++)
 {
  rem=n%2;
  arr[i]=rem;
  n=n/2;
  }
  printf("Binary number: ");
  for(j=i-1;j>=0;j--)
  {
   printf("%d",arr[j]);

  }
  getch();
  return 0;

}


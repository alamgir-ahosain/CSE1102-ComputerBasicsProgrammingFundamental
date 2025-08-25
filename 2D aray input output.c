#include<stdio.h>
int main()
{
   int i,j,row,col;
     printf("Enter numbe of row: ");
    scanf("%d",&row);


    printf("Enter numbe of column: ");
    scanf("%d",&col);

    int a[row][col];
    for(i=0;i<row;i++)

    {
        for(j=0;j<col;j++)
        {
            printf("a([%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("A matrix--\n");
     for(i=0;i<row;i++)

    {
        for(j=0;j<col;j++)
        {
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }







    return 0;
}

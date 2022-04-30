#include<stdio.h>
int main()
{
    int i,j,k,sum=0;
    int row[2],col[2];
    int a[50][50]={2,4,7,5};
    int b[50][50]={5,3,1,9};
    int c[50][50];
    printf("Matrix A row:");
    scanf("%d",&row[0]);
    printf("Matrix A column:");
    scanf("%d",&col[0]);
    for(i=0;i<row[0];i++)
    {
        for(j=0;j<col[0];j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Matrix B row:");
    scanf("%d",&row[1]);
    printf("Matrix B column:");
    scanf("%d",&col[1]);
    for(i=0;i<row[1];i++)
    {
        for(j=0;j<col[1];j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    if(col[0]!=row[1])
    {
        printf("Matrix A column and Matrix B row are not equal.\n");
        printf("So matrix multiplication are not possible.\n");
        return 0;
    }
    if(col[0]==row[1])
    {
      for(i=0;i<row[0];i++)
    {
        for(j=0;j<col[1];j++)
        {
            sum=0;
            for(k=0;k<col[1];k++)
            {
                sum=sum+a[i][k]*b[k][j];
            }
            c[i][j]=sum;
        }
    }
    }
    for(i=0;i<row[0];i++)
    {
        for(j=0;j<col[1];j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }

    return 0;
}

#include<stdio.h>
int main()
{
    int row,col;
    int a[2][2]={{2,5},{3,6}};
    for(row=0;row<2;row++)
    {
        for(col=0;col<2;col++)
        {
            printf("%d ",a[row][col]);
        }
        printf("\n");
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int i,j,t_a[2][2]={{2,3},{5,4}};
    int len;
    len=(sizeof(t_a)/4)/2;
    for(i=0;i<len;i++)
    {
        for(j=0;j<len;j++)
        {
            printf("%d ",t_a[i][j]);
        }
        printf("\n");
    }
}

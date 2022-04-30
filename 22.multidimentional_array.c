#include<stdio.h>
int main()
{
    int m_t_a[2][2][2]={
    {{2,1},{3,2}},{{2,4},{5,7}}
    };
    int a[2];
    int len=(sizeof(m_t_a)/4)/4;
    for(int i=0;i<len;i++)
    {
        for(int j=0;j<len;j++)
        {
            for(int k=0;k<len;k++)
            {
                printf("%d ",m_t_a[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}

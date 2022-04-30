/**Example:Bubble sort
   sample example:9
                  4 5 3 2 6 1 7 9 8
   sample output:1 2 3 4 5 6 7 8 9
*/
#include<stdio.h>
int main()
{
    int a[100],n,i,j,k,l,temp=0;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]>a[j])
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }
        for(j=0;j<n;j++)
        {
            printf("%d ",a[j]);
        }
        printf("\n");
    }
    return 0;
}

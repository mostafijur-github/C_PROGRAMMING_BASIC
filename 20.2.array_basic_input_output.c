#include<stdio.h>
int main()
{
    int i,a[4],sum=0;
    for(i=0;i<4;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }

        printf("%d\n",sum);
    return 0;
}

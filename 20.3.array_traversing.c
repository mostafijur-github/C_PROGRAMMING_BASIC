#include<stdio.h>
int main()
{
    int a[5]={2,3,5,7,8};
    int i=0;
    for(i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    for(i=4;i>=0;i--)
    {
        printf("%d ",a[i]);
    }


    return 0;
}
/**
   Array Traversing
*/

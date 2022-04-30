#include<stdio.h>

int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    if(a>0)
    {
        printf("The number is positive.\n");
    }
    if(a<0)
    {
        printf("The number is negative.\n");
    }

    return 0;
}

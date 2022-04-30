#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    if(a>b)
    {
        printf("The grater number is:%d\n",a);
        printf("#########OR###########\n");
        printf("The smallest number is:%d\n",b);
    }
    else
    {
        printf("The grater number is:%d\n",b);
        printf("##########OR##########\n");
        printf("The smallest number is:%d\n",a);
    }
    return 0;
}

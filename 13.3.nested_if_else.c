#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    printf("Enter the third number:");
    scanf("%d",&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("The grater number is:%d\n",a);
            printf("##########OR##########\n");
            if(c<b)
            {
                printf("The smallest number is:%d\n",c);
            }
            else
            {
                printf("The smallest number is:%d\n",b);
            }
        }
    }
    else
    {
        if(b>c)
        {
            printf("The grater number is:%d\n",b);
            printf("##########OR###########\n");
            if(a<c)
            {
               printf("The smallest number is:%d\n",a);
            }
            else
            {
               printf("The smallest number is:%d\n",c);
            }

        }
        else
        {
            printf("The grater number is:%d\n",c);
            printf("##########OR###########\n");
            if(a<c)
            {
               printf("The smallest number is:%d\n",a);
            }
            else
            {
               printf("The smallest number is:%d\n",c);
            }
        }
    }

    return 0;
}

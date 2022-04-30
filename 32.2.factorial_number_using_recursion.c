#include<stdio.h>
int fact_func(int);
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("Factorial of, %d! = %d\n",n,fact_func(n));
    return 0;
}
int fact_func(int x)
{
    if(x==0)
        return 1;
    else
        return x*fact_func(x-1);
}

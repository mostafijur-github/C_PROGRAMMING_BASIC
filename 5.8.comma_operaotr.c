#include<stdio.h>

int main()
{
    int a,b,cma;
    cma = ( a = 3 , b = 2, a+b);
    printf("%d\n",cma);
    cma = ( a = 3 , b = 2, a=6);
    printf("%d",cma);
    return 0;
}
/**
   Comma operator
   ( , )
*/

#include<stdio.h>

int main()
{
    int a,b,c;
    a = 4;
    b = 2;
    c = ( a > b) ? a : b;
    printf("%d\n",c);
    ( a < b ) ? printf("%d\n",a) : printf("%d",b);

    return 0;
}
/**
   Conditional operator or ternary operator
   ( exp1 ) ? true : false;
*/

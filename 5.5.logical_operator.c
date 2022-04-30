#include<stdio.h>

int main()
{
    int a,b,ck;
    a = 80;
    b = 80;
    ck = a == 80 && b == 80;
    printf("%d\n",ck);
    a = 80;
    b = 82;
    ck = a == 80 || b == 80;
    printf("%d\n",ck);
    a = 80;
    b = 80;
    ck = !(a==80);
    printf("%d\n",ck);

    return 0;
}
/**
   Logical operator...
   && = logical and,
   || = logical or,
   ! = logical not operator.
*/

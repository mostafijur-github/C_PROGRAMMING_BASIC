#include<stdio.h>

int main()
{
    int a,b,c;
    a = 5;
    b = 6;
    c = a & b;
    printf("%d & %d = %d\n",a,b,c);
    c = a | b;
    printf("%d | %d = %d\n",a,b,c);
    c = a ^ b;
    printf("%d ^ %d = %d\n",a,b,c);
    a = 2;
    b = 1;
    c = a << b;
    printf("%d << %d = %d\n",a,b,c);
    c = a >> b;
    printf("%d >> %d = %d\n",a,b,c);

    return 0;
}
/**
    Bitwise operator...
    & = bitwise AND,
    | = bitwise OR,
    ^ = exclusive OR,
    << = left shift,
    >> = right shift.
*/

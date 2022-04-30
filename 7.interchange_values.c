#include<stdio.h>

int main()
{
    int a,b,c;
    a = 5;
    b = 6;
    printf("Before interchange:a = %d and b = %d\n",a,b);
    c = b;
    b = a;
    a = c;
    printf("After interchange:a = %d and b = %d\n",a,b);

    return 0;
}

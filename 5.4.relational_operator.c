#include<stdio.h>

int main()
{
    int a,b,c;
    a = 5;
    b = 4;
    c = a < b;
    printf("%d < %d; result:%d that is false.\n",a,b,c);
    c = a > b;
    printf("%d > %d; result:%d that is true.\n",a,b,c);
    c = a != b;
    printf("%d != %d; result:%d that is true.\n",a,b,c);
    c = a == b;
    printf("%d == %d; result:%d that is false.\n",a,b,c);
    c = a = b;
    printf("c = a = b; result:\n",c);
    return 0;
}
/** relational operator are...
   less than(<),
   less then equal(<=),
   greater than(>),
   greater than equal(>=),
   equal equal(==),
   not equal(!=).
*/

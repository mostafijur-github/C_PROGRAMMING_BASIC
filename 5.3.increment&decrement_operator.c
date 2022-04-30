#include<stdio.h>

int main()
{
     int a,b;
    a = 0;
    a++;
    printf("%d\n",a);
    b = a++;
    printf("%d %d\n",a,b);
    b = ++a;
    printf("%d %d\n",a,b);

    int c,d;
    c = 10;
    c--;
    printf("%d\n",c);
    d = c--;
    printf("%d %d\n",c,d);
    d =--c;
    printf("%d %d\n",c,d);
    return 0;
}
/** Increment operator ++
   Decrement operator --
*/

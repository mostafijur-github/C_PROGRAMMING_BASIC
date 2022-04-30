#include<stdio.h>
int main()
{
    int x,y;
    int *ptr;
    x = 20;
    ptr = &x;
    y = *ptr;
    printf("Value of x is %d\n",x);
    printf("%d is stored at variable(x) add %u\n",x,&x);
    printf("%d is stored at pointer(ptr) add %u\n",ptr,&ptr);
    printf("%d is stored at pointer(ptr) add %u\n",*ptr,ptr);
    printf("%d is stored at pointer(ptr) add %u\n",ptr,&y);
    printf("%d is stored at variable(y) add %u\n",y,&y);
    printf("*ptr = 25\n");
    *ptr = 50;
    printf("Now x is %d\n",x);
    (*ptr)++;
    printf("After increment x is %d",x);
    return 0;
}
/**
When we assign pointer value before we must
assign pointer address.
*ptr++ means increase the address
and (*ptr)++ means increase the values
*/


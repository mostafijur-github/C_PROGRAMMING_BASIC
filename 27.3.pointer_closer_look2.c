#include<stdio.h>
int main()
{
    int x,y;
    int *p,*q;
    p = &x;
    x = 10;
    y = p;
    printf("%d\n",y);
    y = *p;
    printf("%d\n",y);
    y = *(&x);
    printf("%d\n",y);
    q = &(*(&x));
    printf("%d\n",*q);
    int arr[10];
    int *ptr;
    printf("%d\t%d\n",&arr,&arr[0]);
    ptr = arr;
    printf("%d\n",ptr);
    return 0;
}
/**
In pointer variable,
p refers it's address.
*p refers it's values.
arr and arr[0] are equal(arr==arr[0])
*/

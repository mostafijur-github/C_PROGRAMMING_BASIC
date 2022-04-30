#include<stdio.h>
int main()
{
    int a;
    a = 3;
    printf("Before increment a = %d\n",a);
    fun(&a);
    printf("After increment a = %d\n",a);
    return 0;
}
void fun(int *ptr)
{
    (*ptr)++;
}

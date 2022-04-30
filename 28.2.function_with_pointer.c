#include<stdio.h>

void increment(int*);
int main()
{
    int a=5;
    printf("Before increment:%d\n",a);
    increment(&a);
    printf("After increment:%d\n",a);
    return 0;
}
void increment(int *a)
{
    (*a)++;
}

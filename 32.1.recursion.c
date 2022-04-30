#include<stdio.h>
void rec_func(int);

int main()
{
    rec_func(1);
    return 0;
}
void rec_func(int n)
{
    printf("%d\n",n);
    if(n<10)
    {
        rec_func(n+1);
    }
}

#include<stdio.h>
int main()
{
    int i;
    i = 1;
    start:
        printf("%d\n",i);
        i++;
    if(i<=5)
    goto start;

    return 0;
}

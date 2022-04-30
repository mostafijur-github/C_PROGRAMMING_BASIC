#include<stdio.h>
int main()
{
    for(int i=0;i<5;i++)
    {
        static int n=0;
        n++;
        printf("%d\n",n);
    }
    return 0;
}

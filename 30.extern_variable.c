#include<stdio.h>

int global;
int add(int,int);

int main()
{
    printf("%d\n",add(2,4));
    return 0;
}
int add(int a,int b)
{
    extern int global;
    global=a+b;
}
/**
  when a global are used variable locally (in sub function)
  then it said to extern variable.
*/

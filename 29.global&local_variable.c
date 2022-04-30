#include<stdio.h>

int g; //Global Variable
int abc();
int main()
{
    int l = 15;
    g = 10;
    printf("Global Variable in main function %d\n",g);
    printf("Local Variable in main function %d\n",l);
    abc(g,l);
    return 0;
}
int abc()
{
    int l = 20;
    printf("Global Variable in sub function %d\n",g);
    printf("Local Variable in sub function %d\n",l);
}

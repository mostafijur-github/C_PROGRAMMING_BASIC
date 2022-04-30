#include<stdio.h>

struct mystructure
{
    int a;
    double b;
    char c;
};

union myunion
{
    int a;
    double b;
    char c;
};
union myunion2
{
    struct mystructure var;
    int a;
    double b;
    char c;
};

int main()
{
    printf("The size on same structure and union data type.\n");
    printf("In structure size = %d\n",sizeof(struct mystructure));
    printf("In union size = %d\n",sizeof(union myunion));
    printf("Another example myunion2 size = %d\n",sizeof(union myunion2));
    return 0;
}


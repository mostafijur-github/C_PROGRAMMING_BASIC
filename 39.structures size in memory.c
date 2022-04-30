#include<stdio.h>

struct newdata
{
    int a;
    float b;
    char c;
    char ch;
};

struct newdatatype
{
    int a;
    float b;
    char c;
    double d;
    char ch;
};

int main()
{
    struct newdatatype var;
    printf("%d\n",sizeof(struct newdata));
    printf("%d\n",sizeof(var));
    return 0;
}
/**
    The size of a structure are calculated by using
    the higher number of structure member.
*/

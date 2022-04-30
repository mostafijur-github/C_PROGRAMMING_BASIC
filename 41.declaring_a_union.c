#include<stdio.h>

union myunion
{
    int a;
    double b;
    char c;
};

int main()
{
    union myunion obj;
    obj.a=2;
    printf("Int = %d\n",obj.a);
    obj.b=5.2;
    printf("Double = %.2lf\n",obj.b);
    obj.c='U';
    printf("Char = %c\n",obj.c);


    return 0;
}

/**
The general form..
    union tag_name
    {
        member definition1;
        member definition2;
        ..................
        ..................
        member definitionN;
    }variable_name;
 .............OR..............
 union tag_name
    {
        member definition1;
        member definition2;
        ..................
        ..................
        member definitionN;
    };
   union tag_name variable_name;
*/

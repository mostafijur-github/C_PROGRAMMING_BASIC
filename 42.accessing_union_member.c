#include<stdio.h>

union myunion
{
    int a;
    float b;
    char c;
};

int main()
{
    union myunion obj;
    printf("In phase 1\n");
    /**phase 1 */
    obj.a=4;
    obj.b=2.5;
    obj.c='a';
    printf("Int = %d\n",obj.a);
    printf("Float = %f\n",obj.b);
    printf("Char = %C\n",obj.c);
    /**phase 2 */
    printf("In phase 2\n");
    obj.a=4;
    printf("Int = %d\n",obj.a);
    obj.b=2.5;
    printf("Float = %f\n",obj.b);
    obj.c='a';
    printf("Char = %C\n",obj.c);

}
/**
    In phase 1 invalid and
    print some wrong value because in union data type
    we can use only one variable at a time
*/

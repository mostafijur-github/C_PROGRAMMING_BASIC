#include<stdio.h>
void func(void);
void func2(int);
int func3(void);
int func4(int);
int func5(int,int);
int main()
{
    int a,b,c,sum;
    a = 5;
    func();
    func2(a);
    printf("%d\n",func3());
    printf("%d\n",func4(a));
    printf("%d\n",func5(4,5));
    return 0;
}
void func(void)
{
   printf("Function with no argument and no return type.\n");
}
void func2(int a)
{
    printf("Function with argument but no return type.\n");
    printf("%d\n",a);
}
int func3(void)
{
    int x;
    x = 6;
    printf("Function with no argument but return a value.\n");
    return x;
}
int func4(int x)
{
    printf("Function with argument and return a value.\n");
    return x+2;
}
int func5(int a,int b)
{
    printf("Function with multiple argument and return a value.\n");
    return a+b;
}
/**
   function declaration....
   return_type function_name(argument list);
   #########################################
   In one function we get one return values.
*/

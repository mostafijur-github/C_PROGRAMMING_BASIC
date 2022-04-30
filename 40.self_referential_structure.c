#include<stdio.h>

struct self_ref
{
    int a;
    struct self_ref *next;
};
void print_all(struct self_ref pr)
{
     if(pr.a==0)
        return;
    printf("%d ",pr.a);
    print_all(*pr.next); /* That means i refer to the pointer value*/
}
int main()
{
    struct self_ref var1,var2,var3,var4;

    var1.a = 2;
    var1.next = &var2;
    var2.a = 3;
    var2.next = &var3;
    var3.a = 4;
    var3.next = &var4;
    var4.a = 0;
    print_all(var1);
    return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int a=10,b=1;
    gets(str);
    printf("%8.3s\n",str);
    printf("%*.*s\n",8,2,str);
    printf("%*.*s",a,b,str);
    return 0;
}

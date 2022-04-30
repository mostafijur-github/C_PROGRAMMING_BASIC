#include<stdio.h>

int main()
{
    char ch;
    int var1;
    float var2;
    double var3;
    ch='a';
    var1=2;
    var2=3.5;
    var3=4.2234;
    printf("Example of character,that is:%c\n",ch);
    printf("ASCII value of %c is:%d\n",ch,ch);
    printf("Example of integer, that is:%d\n",var1);
    printf("Example of float, that is:%.2f\n",var2);
    printf("Example of double, that is:%.4lf\n",var3);
    printf("size of char is:%d byte\n",sizeof(char));
    printf("size of int is:%d byte\n",sizeof(int)/2);
    printf("size of float is:%d byte\n",sizeof(float));
    printf("size of double is:%d byte\n",sizeof(double));

    return 0;
}

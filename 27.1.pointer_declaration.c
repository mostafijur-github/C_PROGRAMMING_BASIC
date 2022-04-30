#include<stdio.h>
int main()
{
    int num;
    int *p_num;
    p_num = &num;  //assign pointer address
    *p_num = 5;  //assign pointer value
    printf("num=%d \t p_num=%d\n",num,*p_num);
    return 0;
}
/**
    The general form of pointer declaration is;
    Data_type pointer_name[=&variable];
*/

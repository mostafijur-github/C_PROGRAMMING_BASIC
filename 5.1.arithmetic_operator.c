
#include<stdio.h>

int main()
{
    int num1,num2,int_result;
    float result;
    num1=5;
    num2=2;
    int_result=num1+num2;
    result=num1/num2;
    printf("%d + %d = %d\n",num1,num2,int_result);
    printf("%d / %d = %.1f\n",num1,num2,result);
    int_result=num1%num2;
    printf("%d %% %d = %d\n",num1,num2,int_result);
    //example of real operator
    float f_num1,f_num2,float_result;
    f_num1=5;
    f_num2=2;
    float_result=f_num1/f_num2;
    printf("%f / %f = %.1f\n",f_num1,f_num2,float_result);



    return 0;
}
/**Arithmetic operator are...
  ->Integer arithmetic +,-,*,/,% work two integer
  ->Real arithmetic +,-,*,/ work two float,double
*/

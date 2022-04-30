#include<stdio.h>
#include<math.h>
int main()
{
    double x,y;
    long int num;
    printf("Enter a radians value:");
    scanf("%lf",&x);
    printf("sin(%.2lf) = %lf\n",x,sin(x));
    printf("Enter a radians value:");
    scanf("%lf",&x);
    printf("cos(%.2lf) = %lf\n",x,cos(x));
    printf("Enter a radians value:");
    scanf("%lf",&x);
    printf("tan(%.2lf) = %lf\n",x,tan(x));
    printf("Enter a radians value:");
    scanf("%lf",&x);
    printf("sin(%.2lf) inverts = %lf\n",x,asin(x));
    printf("Enter a radians value:");
    scanf("%lf",&x);
    printf("cos(%.2lf) inverts = %lf\n",x,acos(x));
    printf("Enter a radians value:");
    scanf("%lf",&x);
    printf("tan(%.2lf) inverts = %lf\n",x,atan(x));
    printf("Enter a radians value:");
    scanf("%lf",&x);
    printf("sin(%.2lf) hypothetical = %lf\n",x,sinh(x));
    printf("Enter a radians value:");
    scanf("%lf",&x);
    printf("cos(%.2lf) hypothetical = %lf\n",x,cosh(x));
    printf("Enter a radians value:");
    scanf("%lf",&x);
    printf("tan(%.2lf) hypothetical = %lf\n",x,tanh(x));
    printf("Enter a float number:");
    scanf("%lf",&x);
    printf("e^(%.1lf) = %lf\n",x,exp(x));
    printf("Enter a float number:");
    scanf("%lf",&x);
    printf("log(%.1lf) = %lf\n",x,log(x));
    printf("Enter a float number:");
    scanf("%lf",&x);
    printf("log10(%.1lf) = %lf\n",x,log10(x));
    printf("Enter a number ");
    scanf("%lf",&x);
    printf("power ");
    scanf("%lf",&y);
    printf("%lf power %lf = %lf\n",x,y,pow(x,y));
    printf("Enter a number:");
    scanf("%lf",&x);
    printf("%lf sqrt = %lf\n",x,sqrt(x));
    printf("Enter two numbers:");
    scanf("%lf%lf",&x,&y);
    printf("%lf mod %lf = %lf\n",x,y,fmod(x,y));
    printf("Enter a float number:");
    scanf("%lf",&x);
    printf("Float absolute = %lf\n",fabs(x));
    printf("Enter a number:");
    scanf("%ld",&num);
    printf("Long absolute integer = %ld\n",labs(num));
    printf("Enter a float number:");
    scanf("%lf",&x);
    printf("floor(%lf) = %lf\n",x,floor(x));
    printf("Enter a float number:");
    scanf("%lf",&x);
    printf("Ceil(%.1lf) = %lf\n",x,ceil(x));
    return 0;
}
/**
1.sin()->return double value, and print sin value.
2.cos()->return double value, and print cos value.
3.tan()->return double value, and print tan value.
4.asin()->return double value, and print sin inverts value.
5.acos()->return double value, and print sin inverts value.
6.atan()->return double value, and print sin inverts value.
7.sinh()->return double value, and print sin hypothetical value.
8.cosh()->return double value, and print sin hypothetical value.
9.tanh()->return double value, and print sin hypothetical value.
10.exp()->return double value, and print exponential value.
11.log()->return double value, and print log value.
12.log10()->return double value, and print log10 value.
13.pow()->return double value, and print power value.
14.sqrt()->return double value, and print sqrt(root) value.
15.fmod()->return double value, and print modulus value.
16.fabs()->return double value, and print absolute float value.
17.labs()->return integer value, and print absolute long integer value.
18.floor()->return double value, and print floor value.
19.ceil()->return double value, and print ceil value.
*/

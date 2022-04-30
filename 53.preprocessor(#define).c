///Preprocessor ( #define )

#include<stdio.h>

#define PI 3.1416
#define pf printf
#define pri(n) printf("%d\n",n)
#define MAX(a,b) (a>b) ? (a) : (b)
#define MIN(a,b) (a<b) ? printf("%d\n",a) : printf("%d\n",b)
#define add(a,b) (a+b)
int main()
{
    printf("%.4f\n",PI);
    pf("%.4f\n",PI);
    pri(3);
    pri(MAX(3,4));
    MIN(3,4);
    pri(add(2,3));

    return 0;
}


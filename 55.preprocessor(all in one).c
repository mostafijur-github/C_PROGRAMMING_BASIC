///Preprocessor ( all in one )
///#if #else #elif #endif
///#ifdef #ifndef #undef #endif
#include<stdio.h>
#define PI 3.1416
#define a 3
int main()
{
    printf("2 and 3 are...?\n");
    #if 2>3
    printf("2>3\n");
    #elif 2==3
    printf("2==3\n");
    #else
    printf("3>2 or 2<3\n");
    #endif

    #ifdef PI
    printf("%.4f\n",PI);
    #endif // PI
    #ifndef PI
    int PI = 3.1416;
    #endif // PI

    #undef a
    #ifdef a
    printf("%d\n",a);
    #endif // a
    #ifndef a
    int a = 3;
    #endif // a

    return 0;
}

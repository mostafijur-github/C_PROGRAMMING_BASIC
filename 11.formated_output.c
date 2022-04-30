#include<stdio.h>

int main()
{
    int a,b,c;
    printf("%5d\n",123);
    printf("%-5d\n",123);
    printf("%05d\n",123);
    printf("%-5d\n",123);
    printf("%5d\n",1234567);
    printf("%8.2f\n",123.4567);
    printf("%*.*f\n",10,3,123.4567);

    return 0;
}
/**
   printf("%5d",1234567); %5d print the number
   by using a format but not to small his size
*/

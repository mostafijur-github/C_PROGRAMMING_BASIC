#include<stdio.h>

int main()
{
    int a,b,i;
    printf("Enter long numbers:");
    scanf("%3d%d%3d%d",&a,&i,&b,&i);
    printf("%d %d\n",a,b);
    printf("Enter long numbers:");
    scanf("%3d%*d%3d%*d",&a,&b);
    printf("%d %d\n",a,b);
    int day,month,year;
    printf("Enter date:");
    scanf("%d-%d-%d",&day,&month,&year);
    printf("%d %d %d\n",day,month,year);
    int var;
    char c;
    scanf("%d%c\n",&var,&c);
    printf("%d%c\n",var,c);
    return 0;
}

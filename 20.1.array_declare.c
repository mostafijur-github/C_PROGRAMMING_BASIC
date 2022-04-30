#include<stdio.h>
int main()
{
    int a[5];
    char c[4];
    a[0] = 2;
    a[1] = 3;
    a[2] = 4;
    a[3] = 12;
    a[4] = 21;
    printf("%d %d %d %d %d\n",a[0],a[1],a[2],a[3],a[4]);
    c[0] = 'N';
    c[1]= 'B';
    c[2]='I';
    c[3]='U';
    printf("%c%c%c%c\n",c[0],c[1],c[2],c[3]);
    int a2[3]={2,3,4};
    printf("%d %d %d\n",a2[0],a2[1],a2[2]);
    char ch[5]={'a','e','i','o','u'};
    printf("Vowel:%c,%c,%c,%c,%c\n",ch[0],ch[1],ch[2],ch[3],ch[4]);

    return 0;
}
/**Array Declare
   Basic form: data_type array_name[size]={d1,d2,....,dn};

*/

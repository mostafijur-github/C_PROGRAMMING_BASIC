/**Example:fibonacci number:1 1 2 3 5 8 13 21 .......
   sample input:7
   sample output:1 1 2 3 5 8 13
*/
#include<stdio.h>
int main()
{
    int n,i,a,b,fibo=0;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)
            break;
        else if(n==1)
            printf("1");
        else if(n==2)
            printf("1 1");
        else if(n==3)
            printf("1 1 2");
        else
        {
        a = 1;
        b = 1;
        fibo = a+b;
        printf("%d %d %d ",a,b,fibo);
        for(i=3;i<n;i++)
        {
            a = b;
            b = fibo;
            fibo = a+b;
            printf("%d ",fibo);
        }
        }
        printf("\n");
    }
    return 0;
}

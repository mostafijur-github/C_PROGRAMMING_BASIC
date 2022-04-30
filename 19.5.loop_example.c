/**Example:factorial print.
   sample input:5!=1*2*3*4*5
   sample output:120;
*/
#include<stdio.h>
int main()
{
    int n,fact,i;
    while(scanf("%d",&n)!=EOF)
    {
        fact = 1;
        for(i=1;i<=n;i++)
        {
            fact=fact*i;
        }
        printf("%d\n",fact);
    }
    return 0;
}

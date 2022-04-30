/**Example:Print all integer between m & n
   in ascending order.
   input:2 8
   output:2 3 4 5 6 7 8
*/
#include<stdio.h>
int main()
{
    int i,m,n,temp;
    printf("Enter first value:");
    scanf("%d",&m);
    printf("Enter second value:");
    scanf("%d",&n);
    if(m>n)
    {
        temp = m;
        m = n;
        n = temp;
    }
    for(i=m;i<=n;i++)
    {
        printf("%d ",i);
    }
    return 0;
}

/**Example:sum of prime numbers between m and n
   sample input:1 10
                6 3
   sample output:17
                 8
*/
#include<stdio.h>
int main()
{
    int m,n,temp,i,j,check,sum;
    while(scanf("%d%d",&m,&n)!=EOF)
    {
        if(m>n)
        {
            temp=m;
            m=n;
            n=temp;
        }
        sum=0;
            for(i=m;i<=n;i++)
            {
                temp=i;
                check=1;
                if(temp==1)
                    check=0;
                for(j=2;j<temp;j++)
                {
                    if(temp%j==0)
                        check=0;
                }
                if(check==1)
                    sum=sum+temp;
            }
            printf("%d\n",sum);
    }
    return 0;
}

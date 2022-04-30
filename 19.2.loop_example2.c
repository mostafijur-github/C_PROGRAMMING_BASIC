/**Example:Take n integer as input and print their sum.
   input format:n
                n1 n2 n3 ... nn.
   output:sum_n
   sample input:4
                1 2 3 4
   sample output:10
*/
#include<stdio.h>
int main()
{
    int a,i,sum;
    int n[100];
    while(printf("How many number:")&&scanf("%d",&a)!=EOF)
    {
       sum=0;
       printf("Enter the number:");
       for(i=0;i<a;i++)
       {
           scanf("%d",&n[i]);
           sum=sum+n[i];
       }
       printf("Sum=%d\n",sum);
    }


    return 0;
}

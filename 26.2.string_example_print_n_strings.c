/**Example2:print n strings as input and print them in reverse order.
   sample input:          sample output:
      3
      NBIU                  UIBN
      Rajshahi              ihahsjaR
*/
#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j;
    char str[10][100];
    while(printf("Enter how many string:")&&scanf("%d",&n)!=EOF)
    {
        for(i=0;i<n;i++)
        {
            scanf("%s",str[i]);
        }
        for(i=n-1;i>=0;i--)
        {
            printf("%s\n",str[i]);
        }
    }
    return 0;
}

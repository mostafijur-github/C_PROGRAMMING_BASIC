/**Example:print shape
   sample input:3
   sample output:
   *
   **
   ***
*/
#include<stdio.h>
int main()
{
    int n,i,j;
    printf("How many numbers shape:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

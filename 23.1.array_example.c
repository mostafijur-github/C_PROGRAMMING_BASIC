/**Example1:Search a number from an array using linear search
   sample input:6
                1 2 3 4 5 6
                4

                7
                1 2 3 4 5 6 7
                14
   sample output:
   case 1:3
   case 1:no
*/
#include<stdio.h>
int main()
{
    int a[100],i,j,n,search,temp;
    while(scanf("%d",&n)!=EOF)
    {
        temp=1;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        scanf("%d",&search);
        for(j=0;j<n;j++)
        {
            if(a[j]==search)
            {
                printf("The number %d is present in array index:%d\n",search,j);
                temp=0;
                break;
            }
        }
        if(temp==1)
        {
          printf("No\n");
        }
    }
    return 0;
}

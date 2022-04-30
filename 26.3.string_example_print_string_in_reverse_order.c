///Example3:print a string in reverse order
#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char str[100];
    int i=0,j,k,temp,temp2,count=1,count2=0;
    printf("Enter a string:");
    scanf("%[^\n]",str);
    while(str[i]!='\0')
    {
        if(str[i]==' '||str[i]=='.'||str[i]=='!'||str[i]=='?')
        {
            count++;
        }
        i++;

    }
    for(j=0;j<count;j++)
    {
        temp=i;
    while(i>=0)
    {
         i--;
      if(str[i]==' ')
      {
        temp2=i;
        break;
      }
      if(i==0)
      {
          temp2=(-1);
          break;
      }
    }
    for(k=temp2+1;k<=temp;k++)
        {
        printf("%c",str[k]);
        }
    }
    printf("\n");
    char str2[100];
    printf("Enter a single string:");
    scanf("%s",str2);
    for(i=0;str2[i]!='\0';i++)
    {
        count2++;
    }
    for(i=count2-1;i>=0;i--)
    {
        printf("%c",str2[i]);
    }
    ///print string in reverse order using build in function
    printf("\n%s",strrev(str));
    return 0;
}

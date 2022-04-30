#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],str2[100];
    scanf("%s%s",str,str2);
    int i=0,ck=0,count=0,count2=0;
    while(str[i]!='\0'||str2[i]!='\0')
    {
        if(str[i]!=str2[i])
        {
            ck=1;
            break;
        }
        i++;
    }
    if(ck==1)
    {
        printf("Not Same\n");
    }
    else
    {
        printf("Same\n");
    }
    for(int j=0;(str[j]!='\0');j++)
    {
        count++;
    }
    for(int k=0;(str2[k]!='\0');k++)
    {
        count2++;
    }
    if(count==count2)
    {
        printf("s1 and s2 are Same\n");
    }
    else
    {
        printf("s1 and s2 are Not same\n");
    }
    ck=strcmp(str,str2);
    if(ck==0)
    {
        printf("Same\n");
    }
    if(ck<0)
    {
        printf("S1 is grater.\n");
    }
    else
    {
        printf("S2 is grater.\n");
    }

    return 0;
}
/**
   strcmp(s1,s2);
   Returns 0 if s1 and s2 are the same; less than 0 if s1<s2; greater than
   0 if s1>s2.
*/

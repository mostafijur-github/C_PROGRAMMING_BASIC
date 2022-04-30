#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int i=0,count=0,len=0;
    printf("Enter a string:");
    scanf("%[^\n]",str);
    while(str[i]!='\0')
    {
        if(str[i]!=' ')
        {
            count++;
        }
        i++;
    }
    printf("Length=%d\n",count);
    len=strlen(str);
    printf("Length Using strlen()=%d",len);
    return 0;
}

/**
   create a function that count the number of
   a character(given input) in a string
   sample: input    output
   NBIU     N         1
   NBIU     Z         0
*/
#include<stdio.h>
int count_function(char arr[100],char n)
{
    int i=0,count=0;
    while(arr[i]!='\0')
    {
        if(arr[i]==n)
        {
            count++;
        }
        i++;
    }
    return count;
}

int main()
{
    char a[100],c;
    scanf("%s%*c%c",a,&c);
    printf("%d\n",count_function(a,c));
    return 0;
}


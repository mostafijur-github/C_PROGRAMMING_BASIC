#include<stdio.h>
int main()
{
    int i=0;
    printf("In for loop..\n");
    for(i=1;i<=10;i++)
    {
        if(i==5)
        continue;
        printf("%d\n",i);
    }
    i = 0;
    printf("In while loop...\n");
    while(i<=10)
    {
        i++;
        if(i==5)
            continue;
        printf("%d\n",i);
    }

    return 0;
}
/**
    continue statement
    skip the value/statement
*/

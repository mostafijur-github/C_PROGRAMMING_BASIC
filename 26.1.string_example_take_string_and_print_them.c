/**Example1:Take strings as input and print them.
    The program will exit when input string is empty.
   sample input:          sample input:
   NBIU Rajshahi          NBIU Rajshahi
   17309433001            17309433001
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    while(gets(str))
    {
         if(str[0]=='\0')
            return 0;
        puts(str);
    }
    return 0;
}

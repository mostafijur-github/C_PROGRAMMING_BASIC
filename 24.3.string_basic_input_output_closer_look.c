///String Input(Closer look of gets(),scanf(),puts())
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],str2[100],str3[100];
    ///specify the input only a to z A to Z,*,# and space
    scanf("%[a-z A-Z*#]",str);
    printf("%s\n",str);
    ///specify the input without a
    scanf("%[^a]",str2);
    printf("%s",str2);
    gets(str3);///This gets() function take input \n///
    gets(str3);
    puts(str3);
    return 0;
}

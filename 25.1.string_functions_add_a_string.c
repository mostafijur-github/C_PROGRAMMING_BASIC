///Add a string into another string
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100]={"Mostafijur "};
    char str2[100]={"Rahman"};
    char str3[100]={"NBIU"};
    int i;
    for(i=0;(str1[i])!='\0';i++){}
    for(int j=0;(str2[j]!='\0');j++)
    {
        str1[i++]=str2[j];

    }
    printf("%s",str1);
    strcat(str1," ");
    strcat(str1,str3);  ///strcat(str1,str2);//
    printf("\n%s",str1);

    return 0;
}
/**strcat(s1, s2);
    Concatenates string s2 onto the end of string s1.
*/


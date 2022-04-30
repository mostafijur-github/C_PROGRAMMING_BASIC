///Copy a string into another string
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100]={"Mostafijur"};
    char str2[100]={"Rahman"};
    char str3[100]={"NBIU"};
    int i;
   for(i=0;(str1[i])!='\0';i++)
        {
          str1[i]=str2[i];
        }
    printf("%s\n",str1);
    strcpy(str1,str3);
    printf("%s",str1);


    return 0;
}
/**strcpy(s1, s2);
    Copies string s2 into string s1.
*/

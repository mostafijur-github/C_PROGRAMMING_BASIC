#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch,ch2;
    int asci;
    printf("Press any key:");
    scanf("%c",&ch);
    if(isprint(ch))
    {
        printf("It's printable.\n");
    }
    else
    {
        printf("It's non printable.\n");
    }
    printf("Press any key without Enter:");
    scanf("%c%*",&ch);
    if(ispunct(ch))
    {
        printf("It's punctuation mark.\n");
    }
    else
    {
        printf("It's non  punctuation mark.\n");
    }
    printf("Press any key without enter:");
    scanf("%c%*",&ch);
    if(iscntrl(ch))
    {
        printf("It's control key.\n");
    }
    else
    {
        printf("It doesn't control key.\n");
    }
    printf("Press any key without enter:");
    scanf("%c%*",&ch);
    if(isspace(ch))
    {
        printf("It's space key.\n");
    }
    else
    {
        printf("It doesn't space key.\n");
    }
    printf("Enter alphabetic character:");
    scanf("%c%*",&ch);
    if(islower(ch))
    {
        printf("It's lower character.\n");
    }
    else
    {
        printf("It's non lower character.\n");
    }
    printf("Enter alphabetic character:");
   scanf("%c%*",&ch);
    if(isupper(ch))
    {
        printf("It's upper character.\n");
    }
    else
    {
        printf("It's non upper character.\n");
    }
    printf("Enter a character:");
    scanf("%c%*",&ch);
    if(isalpha(ch))
    {
        printf("It's an alphabetic character.\n");
    }
    else
    {
        printf("It's non alphabetic character.\n");
    }
    printf("Enter a character:");
    scanf("%c%*",&ch);
    if(isalnum(ch))
    {
        printf("It's an alpha numeric character.\n");
    }
    else
    {
        printf("It's non alpha numeric character.\n");
    }
    printf("Enter a character:");
    scanf("%c%*",&ch);
    if(isdigit(ch))
    {
        printf("It's digit.\n");
    }
    else
    {
        printf("Doesn't digit.\n");
    }
    printf("Enter a upper character:");
    scanf("%c%*",&ch);
    ch2 = tolower(ch);
    printf("Changed upper to lower:%c\n",ch2);
    printf("Enter a lower character:");
    scanf("%c%*",&ch);
    ch2 = toupper(ch);
    printf("Changed lower to upper:%c\n",ch2);
    printf("Enter a character:");
    scanf("%c%*",&ch);
    asci = toascii(ch);
    printf("The ASCII value is:%d\n",asci);
    return 0;
}
/**
Header file ctype.h(character_type.h)
#It's check the character(star with is).i.e,
1.isprint()->check the character which printable or non.
2.ispunct()->check the character which punctuation or non.
3.iscntrl()->check the character which ctr(control) or non.
4.isspace()->check the character which space or non.
5.islower()->check the character which lower or non.
6.isupper()->check the character which upper or non.
7.isalpha()->check the character which alphabetic or non.
8.isalnum()->check the character which alpha numeric or non.
9.isdigit()->check the character which numeric(digit) or non.
#It's Convert the character(start with to).i.e,
1.tolower()->Convert upper case to lower case.
1.toupper()->Convert lower case to upper case.
1.toascii()->Convert into ASCII value.
*/

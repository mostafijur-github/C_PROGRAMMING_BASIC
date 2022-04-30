///File Management ( Modes read, write, append)
#include<stdio.h>

int main()
{
    FILE *fp,*fp2,*fp3;
    char str[50];
    /*write data to a file or create a file(write mode)*/
    fp = fopen("46new.txt","w");
    gets(str);
    fputs(str,fp);
    fclose(fp);

    /*read data from an existing file(read mode)*/
    fp2 = fopen("46new.txt","r");
    fgets(str,50,fp);
    puts(str);
    fclose(fp2);
    /*write data to a file or create a file(append mode)*/
    fp2 = fopen("46new.txt","a");
    fputs(str,fp2);
    fclose(fp2);
    return 0;
}


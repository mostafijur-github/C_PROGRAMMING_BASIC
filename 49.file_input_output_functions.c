///File Management( file input output functions )
///fprintf(), fscanf(), fwrite(), fread(), putc(), getc(), fputs(), fgets().

#include<stdio.h>
#include<string.h>

struct mystructure{
    char id[4];
    char name[20];
    char address[20];
};
int main()
{
    FILE *fp,*fp2;
    struct mystructure inp={"01","Rahim","Dhaka"};
    struct mystructure out;
    char ch,str[100],str2[50];
    ch = 'A';
    /*fprintf() function, write data to a file*/
    fp = fopen("49fprint.txt","w");
    fprintf(fp,"This is text file for fprinf..\n");
    fclose(fp);
    /*fscanf() function read data from a file*/
    fp = fopen("49fprint.txt","r");
    fscanf(fp,"%s",str);
    printf("%s\n",str);
    fclose(fp);
    /*putc() function, write data to a file*/
    fp = fopen("49put.txt","w");
    putc(ch,fp);
    fclose(fp);
    /*getc() function read data from a file*/
    fp = fopen("49 put.txt","r");
    ch = getc(fp);
    printf("%c\n",ch);
    fclose(fp);
    /*fputs() function, write data to a file*/
    fp = fopen("49puts.txt","w");
    scanf("%s",str2);
    fputs(str2,fp);
    fclose(fp);
    /*fgets() function read data from a file*/
    fp = fopen("49puts.txt","r");
    fgets(str2,50,fp);
    printf("%s\n",str2);
    fclose(fp);
    fp = fopen("49fwrite.txt","w");
    fwrite(&inp,sizeof(inp),1,fp);
    fclose(fp);
    fp = fopen("49fwrite.txt","r");
    fread(&out,sizeof(inp),1,fp);
    printf("%s %s %s\n",out.id,out.name,out.address);
    fclose(fp);

    return 0;
}

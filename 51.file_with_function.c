#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char file_name[100];
void file_rename(char*);
FILE *create(char*);
void write(FILE*);
void file_print(FILE*);
int main()
{
    FILE *fp;
    file_rename("51new_file");
    fp = create("w");
    write(fp);
    fclose(fp);
    fp = create("r");
    file_print(fp);
    fclose(fp);
    return 0;
}

void file_rename(char *new_name)
{
    strcpy(file_name,new_name);
    strcat(file_name,".txt");
}
FILE *create(char *mode)
{
    FILE *fp;
    fp = fopen(file_name,mode);
    return fp;
}
void write(FILE *fp)
{
    fprintf(fp,"%s\n",file_name);
}
void file_print(FILE *fp)
{
    char str[100];
    fscanf(fp,"%s",str);
    printf("%s\n",str);
}

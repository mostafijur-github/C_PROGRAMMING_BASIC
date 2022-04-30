#include<stdio.h>

int main()
{
    FILE *fp;
    fp = fopen("52new_file.txt","w");
    fclose(fp);
    fp = fopen("52newfile.txt","r");
    if(!fp){
        perror("Error");
    }
    fclose(fp);
    fp = fopen("52new_file.txt","r");
    getc(fp);
    if(feof(fp)){
        printf("Error:End of file\n");
    }
    fclose(fp);
    fp = fopen("52new_file.txt","w");
    getc(fp);
    if(ferror(fp)){
        printf("Error:Can't read a file in w mode.\n");
    }
    clearerr(fp);
    if(ferror(fp)){
        printf("Error:Can't read a file in w mode.\n");
    }
    fclose(fp);
    return 0;
}

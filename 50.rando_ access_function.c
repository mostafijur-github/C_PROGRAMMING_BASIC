///fseek() function
#include<stdio.h>

int main()
{
    FILE *fp;
    char str[20];
    fp = fopen("50newfile.txt","w");
    fprintf(fp,"NBIU");
    fclose(fp);
    fp = fopen("50newfile.txt","r");
    fseek(fp,1,0);
    fscanf(fp,"%s",str);
    printf("%s\n",str);
    fclose(fp);
    return 0;
}

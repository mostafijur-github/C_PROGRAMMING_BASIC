///File Management ( EOF )
#include<stdio.h>

int main()
{
    FILE *inp,*out,*ac_out,*ac,*ck;
    int input[10]={1,2,3,4,5,6,7,8,9,10};
    int output[10]={1,2,3,4,5,6,7,8,9,10};
    int ac_output[10]={1,2,3,4,5,6,7,8,9,10};
    int a,b,i;
    inp = fopen("48input.txt","w");
    for(i=0;i<10;i++){
        fprintf(inp,"%d\n",input[i]);
    }
    fclose(inp);
    out = fopen("48output.txt","w");
    for(i=0;i<10;i++){
        fprintf(out,"%d\n",output[i]);
    }
    fclose(out);
    ac_out = fopen("48ac_output.txt","w");
    for(i=0;i<10;i++){
        fprintf(ac_out,"%d\n",ac_output[i]);
    }
    fclose(ac_out);

    ac = fopen("48ac_output.txt","r");
    ck = fopen("48output.txt","r");

    while(fscanf(ac,"%d",&a)!=EOF){
    fscanf(ck,"%d",&b);
        if(a!=b){
            printf("Wrong answer.\n");
            return 0;
        }
    }
    printf("Accepted.\n");
    return 0;
}

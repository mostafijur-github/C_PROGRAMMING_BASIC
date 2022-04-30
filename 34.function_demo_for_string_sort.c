#include<stdio.h>

void name_sort(char name1[],char name2[],char name3[],char name4[],int id[],float cgpa[]);
void id_sort(char name1[],char name2[],char name3[],char name4[],int id[],float cgpa[]);

int main()
{
    char name1[50],name2[50],name3[50],name4[50];
    int id[5];
    float cgpa[5];
    scanf("%s%d%f",name1,&id[0],&cgpa[0]);
    scanf("%s%d%f",name2,&id[1],&cgpa[1]);
    scanf("%s%d%f",name3,&id[2],&cgpa[2]);
    scanf("%s%d%f",name4,&id[3],&cgpa[3]);
    printf("Name sort\n");
    name_sort(name1,name2,name3,name4,id,cgpa);
    printf("Id sort\n");
    id_sort(name1,name2,name3,name4,id,cgpa);
    return 0;
}

void name_sort(char name1[],char name2[],char name3[],char name4[],int id[],float cgpa[])
{
    if(name1[0]=='A'||name1[0]=='a')
    {
        printf("%s %d %.2f\n",name1,id[0],cgpa[0]);
    }
    if(name2[0]=='A'||name2[0]=='a')
    {
        printf("%s %d %.2f\n",name2,id[1],cgpa[1]);
    }
    if(name3[0]=='A'||name3[0]=='a')
    {
        printf("%s %d %.2f\n",name3,id[2],cgpa[2]);
    }
    if(name4[0]=='A'||name4[0]=='a')
    {
        printf("%s %d %.2f\n",name4,id[3],cgpa[3]);
    }
    if(name1[0]=='B'||name1[0]=='b')
    {
        printf("%s %d %.2f\n",name1,id[0],cgpa[0]);
    }
    if(name2[0]=='B'||name2[0]=='b')
    {
        printf("%s %d %.2f\n",name2,id[1],cgpa[1]);
    }
    if(name3[0]=='B'||name3[0]=='b')
    {
        printf("%s %d %.2f\n",name3,id[2],cgpa[2]);
    }
    if(name4[0]=='B'||name4[0]=='b')
    {
        printf("%s %d %.2f\n",name4,id[3],cgpa[3]);
    }
    if(name1[0]=='C'||name1[0]=='c')
    {
        printf("%s %d %.2f\n",name1,id[0],cgpa[0]);
    }
    if(name2[0]=='C'||name2[0]=='c')
    {
        printf("%s %d %.2f\n",name2,id[1],cgpa[1]);
    }
    if(name3[0]=='C'||name3[0]=='c')
    {
        printf("%s %d %.2f\n",name3,id[2],cgpa[2]);
    }
    if(name4[0]=='C'||name4[0]=='c')
    {
        printf("%s %d %.2f\n",name4,id[3],cgpa[3]);
    }
    if(name1[0]=='D'||name1[0]=='d')
    {
        printf("%s %d %.2f\n",name1,id[0],cgpa[0]);
    }
    if(name2[0]=='D'||name2[0]=='d')
    {
        printf("%s %d %.2f\n",name2,id[1],cgpa[1]);
    }
    if(name3[0]=='D'||name3[0]=='d')
    {
        printf("%s %d %.2f\n",name3,id[2],cgpa[2]);
    }
    if(name4[0]=='D'||name4[0]=='d')
    {
        printf("%s %d %.2f\n",name4,id[3],cgpa[3]);
    }
    if(name1[0]=='E'||name1[0]=='e')
    {
        printf("%s %d %.2f\n",name1,id[0],cgpa[0]);
    }
    if(name2[0]=='E'||name2[0]=='e')
    {
        printf("%s %d %.2f\n",name2,id[1],cgpa[1]);
    }
    if(name3[0]=='E'||name3[0]=='e')
    {
        printf("%s %d %.2f\n",name3,id[2],cgpa[2]);
    }
    if(name4[0]=='E'||name4[0]=='e')
    {
        printf("%s %d %.2f\n",name4,id[3],cgpa[3]);
    }
    if(name1[0]=='F'||name1[0]=='f')
    {
        printf("%s %d %.2f\n",name1,id[0],cgpa[0]);
    }
    if(name2[0]=='F'||name2[0]=='f')
    {
        printf("%s %d %.2f\n",name2,id[1],cgpa[1]);
    }
    if(name3[0]=='F'||name3[0]=='f')
    {
        printf("%s %d %.2f\n",name3,id[2],cgpa[2]);
    }
    if(name4[0]=='F'||name4[0]=='f')
    {
        printf("%s %d %.2f\n",name4,id[3],cgpa[3]);
    }
    if(name1[0]=='G'||name1[0]=='g')
    {
        printf("%s %d %.2f\n",name1,id[0],cgpa[0]);
    }
    if(name2[0]=='G'||name2[0]=='g')
    {
        printf("%s %d %.2f\n",name2,id[1],cgpa[1]);
    }
    if(name3[0]=='G'||name3[0]=='g')
    {
        printf("%s %d %.2f\n",name3,id[2],cgpa[2]);
    }
    if(name4[0]=='G'||name4[0]=='g')
    {
        printf("%s %d %.2f\n",name4,id[3],cgpa[3]);
    }
     if(name1[0]=='H'||name1[0]=='h')
    {
        printf("%s %d %.2f\n",name1,id[0],cgpa[0]);
    }
    if(name2[0]=='H'||name2[0]=='h')
    {
        printf("%s %d %.2f\n",name2,id[1],cgpa[1]);
    }
    if(name3[0]=='H'||name3[0]=='h')
    {
        printf("%s %d %.2f\n",name3,id[2],cgpa[2]);
    }
    if(name4[0]=='H'||name4[0]=='h')
    {
        printf("%s %d %.2f\n",name4,id[3],cgpa[3]);
    }
    if(name1[0]=='I'||name1[0]=='i')
    {
        printf("%s %d %.2f\n",name1,id[0],cgpa[0]);
    }
    if(name2[0]=='I'||name2[0]=='i')
    {
        printf("%s %d %.2f\n",name2,id[1],cgpa[1]);
    }
    if(name3[0]=='I'||name3[0]=='i')
    {
        printf("%s %d %.2f\n",name3,id[2],cgpa[2]);
    }
    if(name4[0]=='I'||name4[0]=='i')
    {
        printf("%s %d %.2f\n",name4,id[3],cgpa[3]);
    }
    if(name1[0]=='J'||name1[0]=='j')
    {
        printf("%s %d %.2f\n",name1,id[0],cgpa[0]);
    }
    if(name2[0]=='J'||name2[0]=='j')
    {
        printf("%s %d %.2f\n",name2,id[1],cgpa[1]);
    }
    if(name3[0]=='J'||name3[0]=='j')
    {
        printf("%s %d %.2f\n",name3,id[2],cgpa[2]);
    }
    if(name4[0]=='J'||name4[0]=='j')
    {
        printf("%s %d %.2f\n",name4,id[3],cgpa[3]);
    }
    if(name1[0]=='K'||name1[0]=='k')
    {
        printf("%s %d %.2f\n",name1,id[0],cgpa[0]);
    }
    if(name2[0]=='K'||name2[0]=='k')
    {
        printf("%s %d %.2f\n",name2,id[1],cgpa[1]);
    }
    if(name3[0]=='K'||name3[0]=='k')
    {
        printf("%s %d %.2f\n",name3,id[2],cgpa[2]);
    }
    if(name4[0]=='K'||name4[0]=='k')
    {
        printf("%s %d %.2f\n",name4,id[3],cgpa[3]);
    }
    if(name1[0]=='L'||name1[0]=='l')
    {
        printf("%s %d %.2f\n",name1,id[0],cgpa[0]);
    }
    if(name2[0]=='L'||name2[0]=='l')
    {
        printf("%s %d %.2f\n",name2,id[1],cgpa[1]);
    }
    if(name3[0]=='L'||name3[0]=='l')
    {
        printf("%s %d %.2f\n",name3,id[2],cgpa[2]);
    }
    if(name4[0]=='L'||name4[0]=='l')
    {
        printf("%s %d %.2f\n",name4,id[3],cgpa[3]);
    }
    if(name1[0]=='M'||name1[0]=='m')
    {
        printf("%s %d %.2f\n",name1,id[0],cgpa[0]);
    }
    if(name2[0]=='M'||name2[0]=='m')
    {
        printf("%s %d %.2f\n",name2,id[1],cgpa[1]);
    }
    if(name3[0]=='M'||name3[0]=='m')
    {
        printf("%s %d %.2f\n",name3,id[2],cgpa[2]);
    }
    if(name4[0]=='M'||name4[0]=='m')
    {
        printf("%s %d %.2f\n",name4,id[3],cgpa[3]);
    }
    if(name1[0]=='N'||name1[0]=='n')
    {
        printf("%s %d %.2f\n",name1,id[0],cgpa[0]);
    }
    if(name2[0]=='N'||name2[0]=='n')
    {
        printf("%s %d %.2f\n",name2,id[1],cgpa[1]);
    }
    if(name3[0]=='N'||name3[0]=='n')
    {
        printf("%s %d %.2f\n",name3,id[2],cgpa[2]);
    }
    if(name4[0]=='N'||name4[0]=='n')
    {
        printf("%s %d %.2f\n",name4,id[3],cgpa[3]);
    }
    if(name1[0]=='O'||name1[0]=='o')
    {
        printf("%s %d %.2f\n",name1,id[0],cgpa[0]);
    }
    if(name2[0]=='O'||name2[0]=='o')
    {
        printf("%s %d %.2f\n",name2,id[1],cgpa[1]);
    }
    if(name3[0]=='O'||name3[0]=='o')
    {
        printf("%s %d %.2f\n",name3,id[2],cgpa[2]);
    }
    if(name4[0]=='O'||name4[0]=='o')
    {
        printf("%s %d %.2f\n",name4,id[3],cgpa[3]);
    }
     if(name1[0]=='P'||name1[0]=='p')
    {
        printf("%s %d %.2f\n",name1,id[0],cgpa[0]);
    }
    if(name2[0]=='P'||name2[0]=='p')
    {
        printf("%s %d %.2f\n",name2,id[1],cgpa[1]);
    }
    if(name3[0]=='P'||name3[0]=='p')
    {
        printf("%s %d %.2f\n",name3,id[2],cgpa[2]);
    }
    if(name4[0]=='P'||name4[0]=='p')
    {
        printf("%s %d %.2f\n",name4,id[3],cgpa[3]);
    }
     if(name1[0]=='Q'||name1[0]=='q')
    {
        printf("%s %d %.2f\n",name1,id[0],cgpa[0]);
    }
    if(name2[0]=='Q'||name2[0]=='q')
    {
        printf("%s %d %.2f\n",name2,id[1],cgpa[1]);
    }
    if(name3[0]=='Q'||name3[0]=='q')
    {
        printf("%s %d %.2f\n",name3,id[2],cgpa[2]);
    }
    if(name4[0]=='Q'||name4[0]=='q')
    {
        printf("%s %d %.2f\n",name4,id[3],cgpa[3]);
    }
     if(name1[0]=='R'||name1[0]=='r')
    {
        printf("%s %d %.2f\n",name1,id[0],cgpa[0]);
    }
    if(name2[0]=='R'||name2[0]=='r')
    {
        printf("%s %d %.2f\n",name2,id[1],cgpa[1]);
    }
    if(name3[0]=='R'||name3[0]=='r')
    {
        printf("%s %d %.2f\n",name3,id[2],cgpa[2]);
    }
    if(name4[0]=='R'||name4[0]=='r')
    {
        printf("%s %d %.2f\n",name4,id[3],cgpa[3]);
    }
    if(name1[0]=='S'||name1[0]=='s')
    {
        printf("%s %d %.2f\n",name1,id[0],cgpa[0]);
    }
    if(name2[0]=='S'||name2[0]=='s')
    {
        printf("%s %d %.2f\n",name2,id[1],cgpa[1]);
    }
    if(name3[0]=='S'||name3[0]=='s')
    {
        printf("%s %d %.2f\n",name3,id[2],cgpa[2]);
    }
    if(name4[0]=='S'||name4[0]=='s')
    {
        printf("%s %d %.2f\n",name4,id[3],cgpa[3]);
    }
     if(name1[0]=='U'||name1[0]=='u')
    {
        printf("%s %d %.2f\n",name1,id[0],cgpa[0]);
    }
    if(name2[0]=='U'||name2[0]=='u')
    {
        printf("%s %d %.2f\n",name2,id[1],cgpa[1]);
    }
    if(name3[0]=='U'||name3[0]=='u')
    {
        printf("%s %d %.2f\n",name3,id[2],cgpa[2]);
    }
    if(name4[0]=='U'||name4[0]=='u')
    {
        printf("%s %d %.2f\n",name4,id[3],cgpa[3]);
    }
     if(name1[0]=='V'||name1[0]=='v')
    {
        printf("%s %d %.2f\n",name1,id[0],cgpa[0]);
    }
    if(name2[0]=='V'||name2[0]=='v')
    {
        printf("%s %d %.2f\n",name2,id[1],cgpa[1]);
    }
    if(name3[0]=='V'||name3[0]=='v')
    {
        printf("%s %d %.2f\n",name3,id[2],cgpa[2]);
    }
    if(name4[0]=='V'||name4[0]=='v')
    {
        printf("%s %d %.2f\n",name4,id[3],cgpa[3]);
    }
     if(name1[0]=='Y'||name1[0]=='y')
    {
        printf("%s %d %.2f\n",name1,id[0],cgpa[0]);
    }
    if(name2[0]=='Y'||name2[0]=='y')
    {
        printf("%s %d %.2f\n",name2,id[1],cgpa[1]);
    }
    if(name3[0]=='Y'||name3[0]=='y')
    {
        printf("%s %d %.2f\n",name3,id[2],cgpa[2]);
    }
    if(name4[0]=='Y'||name4[0]=='y')
    {
        printf("%s %d %.2f\n",name4,id[3],cgpa[3]);
    }
     if(name1[0]=='Z'||name1[0]=='z')
    {
        printf("%s %d %.2f\n",name1,id[0],cgpa[0]);
    }
    if(name2[0]=='Z'||name2[0]=='z')
    {
        printf("%s %d %.2f\n",name2,id[1],cgpa[1]);
    }
    if(name3[0]=='Z'||name3[0]=='z')
    {
        printf("%s %d %.2f\n",name3,id[2],cgpa[2]);
    }
    if(name4[0]=='Z'||name4[0]=='z')
    {
        printf("%s %d %.2f\n",name4,id[3],cgpa[3]);
    }
}

void id_sort(char name1[],char name2[],char name3[],char name4[],int id[],float cgpa[])
{
    if(id[0]==1)
    {
        printf("%d %s %.2f\n",id[0],name1,cgpa[0]);
    }
    if(id[0]==2)
    {
        printf("%d %s %.2f\n",id[1],name2,cgpa[1]);
    }
    if(id[0]==3)
    {
        printf("%d %s %.2f\n",id[2],name3,cgpa[2]);
    }
    if(id[0]==4)
    {
        printf("%d %s %.2f\n",id[3],name4,cgpa[3]);
    }
    if(id[1]==1)
    {
        printf("%d %s %.2f\n",id[0],name1,cgpa[0]);
    }
    if(id[1]==2)
    {
        printf("%d %s %.2f\n",id[1],name2,cgpa[1]);
    }
    if(id[1]==3)
    {
        printf("%d %s %.2f\n",id[2],name3,cgpa[2]);
    }
    if(id[1]==4)
    {
        printf("%d %s %.2f\n",id[3],name4,cgpa[3]);
    }
    if(id[2]==1)
    {
        printf("%d %s %.2f\n",id[0],name1,cgpa[0]);
    }
    if(id[2]==2)
    {
        printf("%d %s %.2f\n",id[1],name2,cgpa[1]);
    }
    if(id[2]==3)
    {
        printf("%d %s %.2f\n",id[2],name3,cgpa[2]);
    }
    if(id[2]==4)
    {
        printf("%d %s %.2f\n",id[3],name4,cgpa[3]);
    }
    if(id[3]==1)
    {
        printf("%d %s %.2f\n",id[0],name1,cgpa[0]);
    }
    if(id[3]==2)
    {
        printf("%d %s %.2f\n",id[1],name2,cgpa[1]);
    }
    if(id[3]==3)
    {
        printf("%d %s %.2f\n",id[2],name3,cgpa[2]);
    }
    if(id[3]==4)
    {
        printf("%d %s %.2f\n",id[3],name4,cgpa[3]);
    }
}

#include<stdio.h>
#include<string.h>
struct student
{
    int id;
    char name[50];
    float cgpa;
};
void input(struct student list[])
{
    int i;
    printf("******** Input **********\n");
    for(i=0;i<5;i++)
    {
        scanf("%d%s%f",&list[i].id,list[i].name,&list[i].cgpa);
    }
}
void namesort(struct student list[])
{
    int i,j;
    struct student temp;
    for(i=0;i<4;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(strcmp(list[i].name,list[j].name)>0)
            {
                temp.id = list[i].id;
                strcpy(temp.name,list[i].name);
                temp.cgpa = list[i].cgpa;

                list[i].id = list[j].id;
                strcpy(list[i].name,list[j].name);
                list[i].cgpa = list[j].cgpa;

                list[j].id = temp.id;
                strcpy(list[j].name,temp.name);
                list[j].cgpa = temp.cgpa;
            }
        }

    }
}
void idsort(struct student list[])
{
    int i,j;
    struct student temp;
    for(i=0;i<4;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if((list[i].id) >=(list[j].id))
            {
                temp.id = list[i].id;
                strcpy(temp.name,list[i].name);
                temp.cgpa = list[i].cgpa;

                list[i].id = list[j].id;
                strcpy(list[i].name,list[j].name);
                list[i].cgpa = list[j].cgpa;

                list[j].id = temp.id;
                strcpy(list[j].name,temp.name);
                list[j].cgpa = temp.cgpa;
            }
        }

    }
}
void cgpasort(struct student list[])
{
    int i,j;
    struct student temp;
    for(i=0;i<4;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if((list[i].cgpa) <=(list[j].cgpa))
            {
                temp.id = list[i].id;
                strcpy(temp.name,list[i].name);
                temp.cgpa = list[i].cgpa;

                list[i].id = list[j].id;
                strcpy(list[i].name,list[j].name);
                list[i].cgpa = list[j].cgpa;

                list[j].id = temp.id;
                strcpy(list[j].name,temp.name);
                list[j].cgpa = temp.cgpa;
            }
            if((list[i].cgpa) ==(list[j].cgpa))
            {
                if(strcmp(list[i].name,list[j].name)>0)
                {
                        temp.id = list[i].id;
                    strcpy(temp.name,list[i].name);
                    temp.cgpa = list[i].cgpa;

                    list[i].id = list[j].id;
                    strcpy(list[i].name,list[j].name);
                    list[i].cgpa = list[j].cgpa;

                    list[j].id = temp.id;
                    strcpy(list[j].name,temp.name);
                    list[j].cgpa = temp.cgpa;
                }
            }

        }

    }
}
int main()
{
    int i;
    struct student list[5];
    input(list);
    namesort(list);
    printf("Sorted output using name sort.\n");
    printf("Name ID CGPA\n");
    for(i=0;i<5;i++)
    {
        printf("%s %d %.2f\n",list[i].name,list[i].id,list[i].cgpa);
    }
    idsort(list);
    printf("Sorted output using id.\n");
    printf("ID Name CGPA\n");
    for(i=0;i<5;i++)
    {
        printf("%d %s %.2f\n",list[i].id,list[i].name,list[i].cgpa);
    }
    cgpasort(list);
    printf("Sorted output using cgpa.\n");
    printf("CGPA ID Name\n");
    for(i=0;i<5;i++)
    {
        printf("%.2f %d %s\n",list[i].cgpa,list[i].id,list[i].name);
    }
    return 0;
}

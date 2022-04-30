#include<stdio.h>
#include<stdlib.h>
struct self_ref
{
    int a;
    struct self_ref *next;
};
void print(struct self_ref *ptr)
{
    if(ptr==NULL){
        printf("NULL\n");
        return;
        }
    printf("%d\n",ptr->a);
    print(ptr->next);
    /**  while(1){
            if(ptr==NULL){
                print("NULL\n");
                break;
            }
           printf("%d\n",ptr->a);
           ptr = ptr->next;
        }*/
}
int main()
{
    int n,i;
    struct self_ref *obj_start, *obj, *obj_end;
    obj_start=NULL;
    obj_end=NULL;
    i=5;
    while(i--){
        if(obj_start == obj_end && obj_start==NULL){
        obj = (struct self_ref *)malloc(sizeof(struct self_ref));
        scanf("%d",&n);
        obj->a = n;
        obj->next = NULL;
        obj_start = obj_end = obj;
        }
        else{
            obj = (struct self_ref *)malloc(sizeof(struct self_ref));
            scanf("%d",&n);
            obj->a = n;
            obj->next = NULL;
            obj_end->next = obj;
            obj_end = obj;
            }
    }
    print(obj_start);
    free(obj);
    return 0;
}

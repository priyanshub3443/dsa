#include <stdio.h>
#include<stdlib.h>

struct myarry
{
    int total_size;
    int used_size;
    int *ptr;
};
void createArry(struct myarry *a, int tSize, int uSize)
{
    (*a).total_size = tSize;
    (*a).used_size = uSize;
    (*a).ptr = (int *)malloc(tSize * sizeof(int));
}
void show(struct  myarry *a){
    for(int i=0; i<a->used_size; i++){
        printf("%d\n", (a->ptr)[i]);
    }
} 
void setval(struct  myarry *a){
    int n;
    for(int i=0; i<a->used_size; i++){
        printf("enter element %d", i);
        scanf("%d", &n);
        (a->ptr)[i]=n;
    }
} 

int main()
{
    struct myarry marks;
    createArry(&marks, 10, 2);
    setval(&marks);
    show(&marks);

}
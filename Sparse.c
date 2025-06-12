#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int i;
    int j;
    int x;
} element;

typedef struct
{
    int m;
    int n;
    int num;
    element *ele;
} Sparse;

void create(Sparse *s)
{
    // int
    printf("enter the dimension :");
    scanf("%d%d", &s->m, &s->n);

    printf("\nNumber of  Non zero elements :");
    scanf("%d",&s->num);


    s->ele=(element *)malloc(s->num*sizeof(element));
    printf("\nEnter the non-zero elements");
    for(int i=0;i<s->num;i++){
        scanf("%d%d%d",&s->ele[i].i,&s->ele[i].j,&s->ele[i].x);
    }
}

void display(Sparse s){
    int k=0;
    for(int i=0;i<s.m;i++){
        for(int j=0;j<s.n;j++){
            if(i==s.ele[k].i && j==s.ele[k].j){
                printf("%d ",s.ele[k++].x);
            }
            else{
                printf("0 ");
            }
        }
        printf("\n");
    }
}

int main()
{
    Sparse s;
    create(&s);
    display(s);
    return 0;
}
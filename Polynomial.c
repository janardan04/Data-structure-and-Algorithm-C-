#include<stdio.h>
#include<stdlib.h>

typedef struct {
int coeff;
int exp;
}term;
typedef struct{
    int n;
    term *terms;
}poly;
void create(poly *p){
    printf("enter the number of terms :");
    scanf("%d",&p->n);
    p->terms =(term *)malloc(p->n*sizeof(term));

    printf("\n Enter the terms :");
    for(int i=0;i<p->n;i++){
        printf("Term %d",i+1);
        scanf("%d%d",&p->terms[i].coeff,&p->terms[i].exp);
    }
}
void display(poly p){
    for(int i=0;i<p.n;i++){
        printf("%dx%d+",p.terms[i].coeff,p.terms[i].exp);
    }
}
int main(){

    poly p;
    create(&p);
    display(p);

    return 0;
}
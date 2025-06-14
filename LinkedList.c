#include<stdio.h>
#include<stdlib.h>


typedef struct Node {
    int data;
    struct Node *next;
}Node;

Node *first=NULL;

void create(int arr[],int n){
 Node *p;
 Node *last;

 first=(Node *)malloc(sizeof(Node));

 first->data=arr[0];
 first->next=NULL;
 last=first;

for(int i=1;i<n;i++){
    p=(Node *)malloc(sizeof(Node));
    p->data=arr[i];
    p->next=NULL;
    last->next=p;
    last=p;
}
}
void display(Node *p){
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
}

int main(){

    int a[]={1,2,3,4,5,6};
    create(a,6);
    display(first);
    return 0;
}
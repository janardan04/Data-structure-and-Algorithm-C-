#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next; // self refrential
} Node;

Node *first = NULL; // head

void create(int arr[], int n)
{
    Node *p; // pointer    |data|next|
    Node *curr;

    first = (Node *)malloc(sizeof(Node));

    first->data = arr[0];
    first->next = NULL;
    curr = first;

    for (int i = 1; i < n; i++)
    {
        p = (Node *)malloc(sizeof(Node));
        p->data = arr[i];
        p->next = NULL;
        curr->next = p;
        curr = p;
    }
}

void display(Node *p)
{
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}
void insert(Node **head,int element){
    Node *p;
    p=(Node *)malloc(sizeof(Node ));
    p->data=element;
    p->next=*head;
    *head=p;

    

}
int main()
{

    int a[] = {1, 2, 3, 4, 5, 6};
    create(a, 6);
    display(first);
    insert(&first,23);
        display(first);


    return 0;
}
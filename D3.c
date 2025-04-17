#include<stdio.h>
#include<stdlib.h>
typedef struct{
int length;
int breadth;
} rect;
//dynamic memory allocation of structure
int main(){
	rect *p;
	p=(rect *)malloc(sizeof( rect));
	p->length=10;
	p->breadth=20;
	printf("%d",p->length);
	printf("\n%d\n",p->breadth);
	printf("%d",sizeof(p));
	
}

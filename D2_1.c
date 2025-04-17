#include<stdio.h>
#include<stdlib.h>
int main(){
	int a[]={2,3,4,5,6,7};
	int *p;
	int j;
	p=(int *)malloc(5*sizeof(int));
	for(j=0;j<5;j++){
		p[j]=j+13;
	}
	int i;
	printf("pointer address : %d\n", p);
	printf("size is %d", sizeof(p));
	for(i=0;i<5;i++)
	printf("\n%d",p[i]);
	return 0;
}

#include<stdio.h>
#include<stdlib.h>
void main(){
    int A[5];
    int *p;
    p=(int *)malloc(5*sizeof(int));
    if(p==NULL){
        printf("Alocation failed");
    }
    else{
        printf("Allocation successfull !!");
        }

    printf("enter the elemts");
    for(int i=0;i<5;i++){
        scanf("%d",&p[i]);
    }
    printf("\n");
    for(int i=0;i<5;i++){
        printf("%d",p[i]);
    }
    free(p);
}
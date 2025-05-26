#include<stdio.h>
void  main(){
    int s[5];
    int a[]={2,3,4,5,6};
    int b[5]={0};
    int c[5]={2,3,4};

    for(int i=0;i<5;i++){
        printf("%d ",s[i]);
    }
    printf("\n");
    for(int i=0;i<5;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    for(int i=0;i<5;i++){
        printf("%d ",b[i]);
    }
    printf("\n");
    for(int i=0;i<5;i++){
        printf("%d ",c[i]);
        printf("%d ",i[c]);
        printf("%d ",*(c+i));


    }
    printf("\n");
    printf("%d",sizeof(c));
}
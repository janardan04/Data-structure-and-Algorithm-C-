#include<stdio.h>
static int count=0;
void Toh(int n,int a,int b, int c){
    if(n>0){
        Toh(n-1,a,c,b);
        printf("%d  to %d",a,c);
        count++;
        printf("\n");
        Toh(n-1,b,a,c);
    }
}
void main(){
    int n,a,b,c;
    printf("enter the n,a,b,c respectively" );
    scanf("%d %d %d %d",&n,&a,&b,&c);
    Toh(n,a,b,c);
    printf("%d",count);
}
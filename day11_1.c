#include<stdio.h>
int e(int x, int n){
    static int  s=1;
    if(n==0){
        return s;
    }
    else{
        s=1+x/n*s;
        return e(x,n-1);
    }
}
void main(){
    int x= 2;
    int n=5;
    int result = e(x,n);
    printf("%d",result);
    // printf("%d",2/5);
}
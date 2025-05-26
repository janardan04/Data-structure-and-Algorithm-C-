#include<stdio.h>
void funA(int n){
    if(n>0){
        printf("%d   ",n);
        funB(n-1);
    }
}
void funB(int n){
    if(n>0){
        printf("%d   ",n);
        funA(n/2);
    }
}
int funC(int n){
    if(n>100){
        return n-10;
    }
    else{
        return funC(funC(n+11));
    }
}
int sum(int n){
    if(n>0){
        return sum(n-1)*n;
    }
}
void main()
{
int n=20;
funA(n);
int r =funC(95);
// printf("%d",r);
printf("%d",sum(5));
}
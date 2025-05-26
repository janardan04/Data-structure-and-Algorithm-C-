#include<stdio.h>
int factorial(int n){
if(n>0){
    return factorial(n-1)*n;
}
else if(n==1 || n==0){
    return 1;
}
}
void main(){
    int n;
    printf("enter the number :");
    scanf("%d",&n);
    int r = factorial(n);
    printf("factorial of %d  is  %d",n,r);
}

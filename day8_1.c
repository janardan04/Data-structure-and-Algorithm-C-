#include<stdio.h>
void fun(int n){
    if(n>0){
        printf("%d  ",n);
        fun(n-1);
        fun(n-1);
        fun(n-1);
    }
}
int isperfect(int n){
    int i=0;
    int sum=0;
    
    for(i=1;i<n;i++){
        if(n%i==0){
            sum +=i;
        }   
    }
    if(sum==n){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int x ;
    printf("enter the number to check whether it is perfect or not :");
    scanf("%d",&x);
    
    fun(x);
    if(isperfect(x)){
        printf("number is perfect");
    }
    else{
        printf("number is not perfect");
    }
    return 0;
}
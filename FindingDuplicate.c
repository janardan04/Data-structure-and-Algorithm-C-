#include<stdio.h>
#include<stdlib.h>
void Duplicate(int arr[],int n){
    int max=0;
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    int Hash[max+1];
    for(int i=0;i<=max;i++){
        Hash[i]=0;
    }
    for(int i=0;i<n;i++){
        Hash[arr[i]]++;
    }
    printf("\nDuplicate elements with their occurance are :");
    for(int i=1;i<=max;i++){
        if(Hash[i]>1){
            printf("\n%d occurs %d Times ",i,Hash[i]);
        }
    }
}
int main(){
    int a[100];
    int n;
    printf("\n enter the length of array :");
    scanf("%d",&n);
    printf("\n enter the elements :");
    for(int i = 0; i<n; i++)
    {
     scanf("%d",&a[i]);
    }
    Duplicate(a,n); 
}